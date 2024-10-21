# save all General-Purpose(GP) registers to context
# struct context *base = &ctx_task;
# base->ra = ra;
# ......
.macro reg_save base
	sw ra, 0(\base)
	sw sp, 4(\base)
	sw gp, 8(\base)
	sw tp, 12(\base)
	sw t0, 16(\base)
	sw t1, 20(\base)
	sw t2, 24(\base)
	sw s0, 28(\base)
	sw s1, 32(\base)
	sw a0, 36(\base)
	sw a1, 40(\base)
	sw a2, 44(\base)
	sw a3, 48(\base)
	sw a4, 52(\base)
	sw a5, 56(\base)
	sw a6, 60(\base)
	sw a7, 64(\base)
	sw s2, 68(\base)
	sw s3, 72(\base)
	sw s4, 76(\base)
	sw s5, 80(\base)
	sw s6, 84(\base)
	sw s7, 88(\base)
	sw s8, 92(\base)
	sw s9, 96(\base)
	sw s10, 100(\base)
	sw s11, 104(\base)
	sw t3, 108(\base)
	sw t4, 112(\base)
	sw t5, 116(\base)
	# we don't save t6 here, due to we have used
	# it as base, we have to save t6 in an extra step
	# outside of reg_save
.endm

# restore all General-Purpose(GP) registers from the context
# struct context *base = &ctx_task;
# ra = base->ra;
# ......
.macro reg_restore base
	lw ra, 0(\base)
	lw sp, 4(\base)
	lw gp, 8(\base)
	lw tp, 12(\base)
	lw t0, 16(\base)
	lw t1, 20(\base)
	lw t2, 24(\base)
	lw s0, 28(\base)
	lw s1, 32(\base)
	lw a0, 36(\base)
	lw a1, 40(\base)
	lw a2, 44(\base)
	lw a3, 48(\base)
	lw a4, 52(\base)
	lw a5, 56(\base)
	lw a6, 60(\base)
	lw a7, 64(\base)
	lw s2, 68(\base)
	lw s3, 72(\base)
	lw s4, 76(\base)
	lw s5, 80(\base)
	lw s6, 84(\base)
	lw s7, 88(\base)
	lw s8, 92(\base)
	lw s9, 96(\base)
	lw s10, 100(\base)
	lw s11, 104(\base)
	lw t3, 108(\base)
	lw t4, 112(\base)
	lw t5, 116(\base)
	lw t6, 120(\base)
.endm

# Something to note about save/restore:
# - We use mscratch to hold a pointer to context of previous task
# - We use t6 as the 'base' for reg_save/reg_restore, because it is the
#   very bottom register (x31) and would not be overwritten during loading.

.text

.global switch_save
.align 4
switch_save:
	csrci mstatus, 0x8    	  # 關閉 MIE 位 (清除第 3 位)
	csrrs t0, mstatus, t1     # t0 = mstatus
	li t1, 0x80               # 將第 7 位置為 1
	csrrs t0, mstatus, t1     # 設置 MPIE 位


	# save context(registers).
	csrrw	t6, mscratch, t6	# swap t6 and mscratch
	reg_save t6

	# Save the actual t6 register, which we swapped into
	# mscratch
	mv	t5, t6		# t5 points to the context of current task
	csrr	t6, mscratch	# read t6 back from mscratch
	sw	t6, 120(t5)	# save t6 with t5 as base

	# save mepc to context of current task
	csrr	a0, mepc
	sw	a0, 124(t5)

	# Restore the context pointer into mscratch
	csrw	mscratch, t5

	csrsi mstatus, 0x8        # 開啟 MIE 位 (設置第 3 位)
	csrrc t0, mstatus, t1     # t0 = mstatus
	li t1, 0x80               # 將第 7 位置為 1
	csrrc t0, mstatus, t1     # 清除 MPIE 位


    # 根據 mcause 跳轉到對應的中斷處理函數
    csrr    a0, mcause             # 讀取 mcause 的值
	andi    t1, a0, 0xFF     	   # 使用 andi 指令屏蔽掉高位，保留低 12 位
    li      t0, 3                  # 軟體中斷編號
    beq     t1, t0, s_handler 	   # 如果中斷編號是 3，跳轉到軟體中斷處理程序
    li      t0, 7                  # 時間中斷編號
    beq     t1, t0, t_handler  	   # 如果中斷編號是 7，跳轉到時間中斷處理程序
	mret

s_handler:
    call 	software_handler
    ret

t_handler:
    call 	timer_handler
    ret

# void switch_to(struct context *next);
# a0: pointer to the context of the next task
.globl switch_to
.align 4
switch_to:
	csrci mstatus, 0x8        # 關閉 MIE 位 (清除第 3 位)
	csrrs t0, mstatus, t1     # t0 = mstatus
	li t1, 0x80               # 將第 7 位置為 1
	csrrs t0, mstatus, t1     # 設置 MPIE 位


	# switch mscratch to point to the context of the next task
	csrw	mscratch, a0
	# set mepc to the pc of the next task
	lw	a1, 124(a0)
	csrw	mepc, a1
	# Restore all GP registers
	# Use t6 to point to the context of the new task
	mv	t6, a0
	reg_restore t6

	csrsi mstatus, 0x8        # 開啟 MIE 位 (設置第 3 位)
	csrrc t0, mstatus, t1     # t0 = mstatus
	li t1, 0x80               # 將第 7 位置為 1
	csrrc t0, mstatus, t1     # 清除 MPIE 位

	# Do actual context switching.
	# Notice this will enable global interrupt
	mret

.end

