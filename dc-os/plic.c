#include "os.h"

void plic_init(void)
{
	int hart;
    hart = r_tp();  // 讀取硬體 ID

	/* 
	 * Set priority
	 *
	 * Each PLIC interrupt source can be assigned a priority by writing 
	 * to its 32-bit memory-mapped priority register.
	 * The E203-pro supports 8 levels of priority. 
	 * A priority value of 0 is reserved to mean "never interrupt" and 
	 * effectively disables the interrupt. 
	 * Priority 1 is the lowest active priority, and priority 7 is the highest. 
	 * Ties between global interrupts of the same priority are broken by 
	 * the Interrupt ID; interrupts with the lowest ID have the highest 
	 * effective priority.
	 */
	*(uint32_t*)PLIC_PRIORITY(IRQ1_WDOGCMP) = 7;
	*(uint32_t*)PLIC_PRIORITY(IRQ2_RTCCMP)  = 7;

    *(uint32_t*)PLIC_PRIORITY(IRQ3_UART0)   = 6;
	*(uint32_t*)PLIC_PRIORITY(IRQ4_UART1)   = 6;

	*(uint32_t*)PLIC_PRIORITY(IRQ5_QSPI0)   = 5;
	*(uint32_t*)PLIC_PRIORITY(IRQ6_QSPI1)   = 5;
    *(uint32_t*)PLIC_PRIORITY(IRQ7_QSPI2)   = 4;

	*(uint32_t*)PLIC_PRIORITY(IRQ8_GPIO0)   = 4;
	*(uint32_t*)PLIC_PRIORITY(IRQ9_GPIO1)   = 3;
	*(uint32_t*)PLIC_PRIORITY(IRQ10_GPIO2)  = 3;
    *(uint32_t*)PLIC_PRIORITY(IRQ11_GPIO3)  = 2;
	*(uint32_t*)PLIC_PRIORITY(IRQ12_GPIO4)  = 2;
	*(uint32_t*)PLIC_PRIORITY(IRQ13_GPIO5)  = 1;
	*(uint32_t*)PLIC_PRIORITY(IRQ14_GPIO6)  = 1;


	/*
	 * Enable
	 *
	 * Each global interrupt can be enabled by setting the corresponding 
	 * bit in the enables registers.
	 */
	*(uint32_t*)PLIC_MENABLE(hart)= (1 << IRQ1_WDOGCMP)
									| (1 << IRQ2_RTCCMP )
									| (1 << IRQ3_UART0  )
									| (1 << IRQ4_UART1  )
									| (1 << IRQ5_QSPI0  )
									| (1 << IRQ6_QSPI1  )
									| (1 << IRQ7_QSPI2  )

									| (1 << IRQ8_GPIO0  )
									| (1 << IRQ9_GPIO1  )
									| (1 << IRQ10_GPIO2 )
									| (1 << IRQ11_GPIO3 )
									| (1 << IRQ12_GPIO4 )
									| (1 << IRQ13_GPIO5 )
									| (1 << IRQ14_GPIO6 );	


	/* 
	 * Set priority threshold
	 *
	 * PLIC will mask all interrupts of a priority less than or equal to threshold.
	 * Maximum threshold is 7.
	 * For example, a threshold value of zero permits all interrupts with
	 * non-zero priority, whereas a value of 7 masks all interrupts.
	 * Notice, the threshold is global for PLIC, not for each interrupt source.
	 */
	*(uint32_t*)PLIC_MTHRESHOLD(hart) = 0;

	/* enable machine-mode external interrupts. */
	w_mie(r_mie() | MIE_MEIE);

}

/* 
 * DESCRIPTION:
 *	Query the PLIC what interrupt we should serve.
 *	Perform an interrupt claim by reading the claim register, which
 *	returns the ID of the highest-priority pending interrupt or zero if there 
 *	is no pending interrupt. 
 *	A successful claim also atomically clears the corresponding pending bit
 *	on the interrupt source.
 * RETURN VALUE:
 *	the ID of the highest-priority pending interrupt or zero if there 
 *	is no pending interrupt.
 */
int plic_claim(void)
{
	int hart;
    hart = r_tp();  // 讀取硬體 ID
	int irq = *(uint32_t*)PLIC_MCLAIM(hart);
	return irq;
}

/* 
 * DESCRIPTION:
  *	Writing the interrupt ID it received from the claim (irq) to the 
 *	complete register would signal the PLIC we've served this IRQ. 
 *	The PLIC does not check whether the completion ID is the same as the 
 *	last claim ID for that target. If the completion ID does not match an 
 *	interrupt source that is currently enabled for the target, the completion
 *	is silently ignored.
 * RETURN VALUE: none
 */
void plic_complete(int irq)
{
	int hart;
    hart = r_tp();  // 讀取硬體 ID
	*(uint32_t*)PLIC_MCOMPLETE(hart) = irq;
}