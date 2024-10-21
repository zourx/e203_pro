#include "os.h"

void (* const traps[])(void);

/* defined in entry.S */
extern void switch_save(void);

extern void uart_isr(void);
extern void timer_handler(void);
extern void schedule(void);
extern void do_syscall(struct context *cxt);
extern uint32_t VECTORS_START;
extern uint32_t VECTORS_END;
extern uint32_t NTS_SP_END;

struct context *current_context;

void trap_init()
{
	w_mtvec((reg_t)NTS_SP_END);
	/*
	 * set the trap-vector base-address for machine-mode
	 */
	w_mtvec((reg_t)VECTORS_START);
}

void syscall_handler(struct context *cxt)
{
	uart_puts("exception!\n");
	uart_puts("System call from M-mode!\n");
	
	do_syscall(cxt);
}

void syscall_handler_wrapper(void)
{
    if (current_context != NULL) {
        syscall_handler(current_context);
    }
}


void external_handler()
{
	uart_puts("interruption!\n");
	
	int irq = plic_claim();
	int irq_happen = irq != 0;


	if (irq_happen) {
		switch (irq) {
		case IRQ1_WDOGCMP:
			uart_puts("IRQ1_WDOGCMP interruption!\n");
			break;

		case IRQ2_RTCCMP:
			uart_puts("IRQ2_RTCCMP interruption!\n");
			break;

		case IRQ3_UART0:
			uart_puts("IRQ3_UART0 interruption!\n");
			break;

		case IRQ4_UART1:
			uart_puts("IRQ4_UART1 interruption!\n");
			break;

		case IRQ5_QSPI0:
			uart_puts("IRQ5_QSPI0 interruption!\n");
			break;

		case IRQ6_QSPI1:
			uart_puts("IRQ6_QSPI1 interruption!\n");
			break;

		case IRQ7_QSPI2:
			uart_puts("IRQ7_QSPI2 interruption!\n");
			break;

		case IRQ8_GPIO0:
			uart_puts("IRQ8_GPIO0 interruption!\n");
			break;

		case IRQ9_GPIO1:
			uart_puts("IRQ9_GPIO1 interruption!\n");
			break;

		case IRQ10_GPIO2:
			uart_puts("IRQ10_GPIO2 interruption!\n");
			break;

		case IRQ11_GPIO3:
			uart_puts("IRQ11_GPIO3 interruption!\n");
			break;

		case IRQ12_GPIO4:
			uart_puts("IRQ12_GPIO4 interruption!\n");
			break;

		case IRQ13_GPIO5:
			uart_puts("IRQ13_GPIO5 interruption!\n");
			break;

		case IRQ14_GPIO6:
			uart_puts("IRQ14_GPIO6 interruption!\n");
			break;

		default:
			printf("unexpected interrupt irq = %d\n", irq);
			break;
		}
	}
}

void software_handler(void)
{
	uart_puts("software interruption!\n");
	/*
		* acknowledge the software interrupt by clearing
			* the MSIP bit in mip.
		*/
	int id = r_mhartid();
		*(uint32_t*)CLINT_MSIP(id) = 0;

	schedule();
}

void test1_handler()
{
	uart_puts("external interruption!\n");
}

void test2_handler()
{
	uart_puts("external interruption!\n");
}

__attribute__ ((section(".vectors"), used))
void (* const  traps[])(void) = {
    0,                                          // 00: exception - Reserved
    0,                                          // 01: exception - Reserved
    0,                                          // 02: exception - Reserved
    0,  			                            // 03: exception - Reserved
    0,                                          // 04: exception - Reserved
    0,                                          // 05: exception - Reserved
    0,                                          // 06: exception - Reserved
    0,			                                // 07: exception - Reserved
    0,                                          // 08: exception - Reserved
    0,                                          // 09: exception - Reserved
    0,                                          // 10: exception - Reserved
    syscall_handler_wrapper,                    // 11: exception - Environment call from M-mode
    0,                                          // 00: interrupt - Reserved
    0,                                          // 01: interrupt - Reserved
    0,                                          // 02: interrupt - Reserved
    switch_save, 	                            // 03: interrupt - software_Handler
    0,                                          // 04: interrupt - Reserved
    0,                                          // 05: interrupt - Reserved
    0,                                          // 06: interrupt - Reserved
    switch_save,                                // 07: interrupt - timer_Handler
    0,                                          // 08: interrupt - Reserved
    0,                                          // 09: interrupt - Reserved
    0,                                          // 10: interrupt - Reserved
    external_handler,                           // 11: interrupt - external_Handler
};

void trap_test()
{
	/*
	 * Synchronous exception code = 7
	 * Store/AMO access fault
	 */
	*(int *)0x00000000 = 100;

	/*
	 * Synchronous exception code = 5
	 * Load access fault
	 */
	//int a = *(int *)0x00000000;

	uart_puts("Yeah! I'm return back from trap!\n");
}

