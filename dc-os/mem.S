.section .rodata
.global HEAP_START
HEAP_START: .word _heap_start

.global HEAP_SIZE
HEAP_SIZE: .word _heap_size

.global TEXT_START
TEXT_START: .word _text_start

.global TEXT_END
TEXT_END: .word _text_end

.global DATA_START
DATA_START: .word _data_start

.global DATA_END
DATA_END: .word _data_end

.global RODATA_START
RODATA_START: .word _rodata_start

.global RODATA_END
RODATA_END: .word _rodata_end

.global BSS_START
BSS_START: .word _bss_start

.global BSS_END
BSS_END: .word _bss_end

.global NTS_START
NTS_START: .word _nts_start

.global NTS_END
NTS_END: .word _nts_end

.global NTS_SP_START
NTS_SP_START: .word _nts_sp_start

.global NTS_SP_END
NTS_SP_END: .word _nts_sp_end

.global VECTORS_START
VECTORS_START: .word _vectors_start

.global VECTORS_END
VECTORS_END: .word _vectors_end

.global RESET_START
RESET_START: .word _reset_start

.global RESET_END
RESET_END: .word _reset_end