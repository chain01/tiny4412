

#pragma once

#define gpiobase	0x11000000
#define GPM4CON 	(*(volatile unsigned long *)(gpiobase + 0x02E0)) 
#define GPM4DAT		(*(volatile unsigned long *)(gpiobase + 0x02E4))
#define GPX3CON		(*(volatile unsigned long *)(gpiobase + 0x0C60))
#define GPX4DAT		(*(volatile unsigned long *)(gpiobase + 0x0C64))

#define gicbase		0x10480000
#define ICCICR_CPU0	(*(volatile unsigned long *)(gicbase + 0x0))
#define ICCPMR_CPU0	(*(volatile unsigned long *)(gicbase + 0x4))
#define ICCBPR_CPU0	(*(volatile unsigned long *)(gicbase + 0x8))
#define ICCIAR_CPU0     (*(volatile unsigned long *)(gicbase + 0xc))
#define ICCEOIR_CPU0    (*(volatile unsigned long *)(gicbase + 0x10))
#define ICCRPR_CPU0 	(*(volatile unsigned long *)(gicbase + 0x14))
#define ICCHPIR_CPU0	(*(volatile unsigned long *)(gicbase + 0x18))
#define ICCABPR_CPU0	(*(volatile unsigned long *)(gicbase + 0x1c))
#define INTEG_EN_C_CPU0 (*(volatile unsigned long *)(gicbase + 0x40))
#define INTERRUPT_OUT_CPU0  (*(volatile unsigned long *)(gicbase + 0x44))

#define ICCIIDR   (*(volatile unsigned long *)(gicbase + 0xfc))

#define icdbase	0x10490000
#define ICDDCR    (*(volatile unsigned long *)(icdbase + 0x0))
#define ICDICTR   (*(volatile unsigned long *)(icdbase + 0x4))
#define ICDIIDR   (*(volatile unsigned long *)(icdbase + 0x8))

#define ICDISR0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0080))
#define ICDISR1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0084))
#define ICDISR2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0088))
#define ICDISR3_CPU0 (*(volatile unsigned long *)(icdbase + 0x008C))
#define ICDISR4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0090))

#define ICDISER0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0100))
#define ICDISER1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0104))
#define ICDISER2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0108))
#define ICDISER3_CPU0 (*(volatile unsigned long *)(icdbase + 0x010C))
#define ICDISER4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0110))

#define ICDICER0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0180))
#define ICDICER1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0184))
#define ICDICER2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0188))
#define ICDICER3_CPU0 (*(volatile unsigned long *)(icdbase + 0x018C))
#define ICDICER4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0190))

#define ICDISPR0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0200))
#define ICDISPR1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0204))
#define ICDISPR2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0208))
#define ICDISPR3_CPU0 (*(volatile unsigned long *)(icdbase + 0x020C))
#define ICDISPR4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0210))

#define ICDICPR0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0280))
#define ICDICPR1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0284))
#define ICDICPR2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0288))
#define ICDICPR3_CPU0 (*(volatile unsigned long *)(icdbase + 0x028C))
#define ICDICPR4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0290))

#define ICDABR0_CPU0  (*(volatile unsigned long *)(icdbase + 0x0300))
#define ICDABR1_CPU0  (*(volatile unsigned long *)(icdbase + 0x0304))
#define ICDABR2_CPU0  (*(volatile unsigned long *)(icdbase + 0x0308))
#define ICDABR3_CPU0  (*(volatile unsigned long *)(icdbase + 0x030C))
#define ICDABR4_CPU0  (*(volatile unsigned long *)(icdbase + 0x0310))

/*ICDIPR0_CPU0  ~~~ ICDIPR39_CPU0 */
#define ICDIPTR0_CPU0  (*(volatile unsigned long *)(icdbase + 0x0800))
#define ICDIPTR1_CPU0  (*(volatile unsigned long *)(icdbase + 0x0804))
#define ICDIPTR2_CPU0  (*(volatile unsigned long *)(icdbase + 0x0808))
#define ICDIPTR3_CPU0  (*(volatile unsigned long *)(icdbase + 0x080C))
#define ICDIPTR4_CPU0  (*(volatile unsigned long *)(icdbase + 0x0810))
#define ICDIPTR5_CPU0  (*(volatile unsigned long *)(icdbase + 0x0814))
#define ICDIPTR6_CPU0  (*(volatile unsigned long *)(icdbase + 0x0818))
#define ICDIPTR7_CPU0  (*(volatile unsigned long *)(icdbase + 0x081C))
#define ICDIPTR8_CPU0  (*(volatile unsigned long *)(icdbase + 0x0820))
#define ICDIPTR9_CPU0  (*(volatile unsigned long *)(icdbase + 0x0824))
#define ICDIPTR10_CPU0 (*(volatile unsigned long *)(icdbase + 0x0828))
#define ICDIPTR11_CPU0 (*(volatile unsigned long *)(icdbase + 0x082C))
#define ICDIPTR12_CPU0 (*(volatile unsigned long *)(icdbase + 0x0830))
#define ICDIPTR13_CPU0 (*(volatile unsigned long *)(icdbase + 0x0834))
#define ICDIPTR14_CPU0 (*(volatile unsigned long *)(icdbase + 0x0838))
#define ICDIPTR15_CPU0 (*(volatile unsigned long *)(icdbase + 0x083C))
#define ICDIPTR16_CPU0 (*(volatile unsigned long *)(icdbase + 0x0840))
#define ICDIPTR17_CPU0 (*(volatile unsigned long *)(icdbase + 0x0844))
#define ICDIPTR18_CPU0 (*(volatile unsigned long *)(icdbase + 0x0848))
#define ICDIPTR19_CPU0 (*(volatile unsigned long *)(icdbase + 0x084C))
#define ICDIPTR20_CPU0 (*(volatile unsigned long *)(icdbase + 0x0850))
#define ICDIPTR21_CPU0 (*(volatile unsigned long *)(icdbase + 0x0854))
#define ICDIPTR22_CPU0 (*(volatile unsigned long *)(icdbase + 0x0858))
#define ICDIPTR23_CPU0 (*(volatile unsigned long *)(icdbase + 0x085C))
#define ICDIPTR24_CPU0 (*(volatile unsigned long *)(icdbase + 0x0860))
#define ICDIPTR25_CPU0 (*(volatile unsigned long *)(icdbase + 0x0864))
#define ICDIPTR26_CPU0 (*(volatile unsigned long *)(icdbase + 0x0868))
#define ICDIPTR27_CPU0 (*(volatile unsigned long *)(icdbase + 0x086C))
#define ICDIPTR28_CPU0 (*(volatile unsigned long *)(icdbase + 0x0870))
#define ICDIPTR29_CPU0 (*(volatile unsigned long *)(icdbase + 0x0874))
#define ICDIPTR30_CPU0 (*(volatile unsigned long *)(icdbase + 0x0878))
#define ICDIPTR31_CPU0 (*(volatile unsigned long *)(icdbase + 0x087C))
#define ICDIPTR32_CPU0 (*(volatile unsigned long *)(icdbase + 0x0880))
#define ICDIPTR33_CPU0 (*(volatile unsigned long *)(icdbase + 0x0884))
#define ICDIPTR34_CPU0 (*(volatile unsigned long *)(icdbase + 0x0888))
#define ICDIPTR35_CPU0 (*(volatile unsigned long *)(icdbase + 0x088C))
#define ICDIPTR36_CPU0 (*(volatile unsigned long *)(icdbase + 0x0890))
#define ICDIPTR37_CPU0 (*(volatile unsigned long *)(icdbase + 0x0894))
#define ICDIPTR38_CPU0 (*(volatile unsigned long *)(icdbase + 0x0898))
#define ICDIPTR39_CPU0 (*(volatile unsigned long *)(icdbase + 0x089C))


#define ICDICFR0_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C00))
#define ICDICFR1_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C04))
#define ICDICFR2_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C08))
#define ICDICFR3_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C0C))
#define ICDICFR4_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C10))
#define ICDICFR5_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C14))
#define ICDICFR6_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C18))
#define ICDICFR7_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C1C))
#define ICDICFR8_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C20))
#define ICDICFR9_CPU0 (*(volatile unsigned long *)(icdbase + 0x0C24))

#define PPI_STATUS_CPU0 (*(volatile unsigned long *)(icdbase + 0x0D00))

#define SPI_STATUS0 (*(volatile unsigned long *)(icdbase + 0x0D04))
#define SPI_STATUS1 (*(volatile unsigned long *)(icdbase + 0x0D08))
#define SPI_STATUS2 (*(volatile unsigned long *)(icdbase + 0x0D0C))
#define SPI_STATUS3 (*(volatile unsigned long *)(icdbase + 0x0D10))

#define ICDSGIR  (*(volatile unsigned long *)(icdbase + 0x0f00))




