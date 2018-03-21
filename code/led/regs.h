

#pragma once

#define gpiobase	0x11000000
#define GPM4CON 	(*(volatile unsigned long *)(gpiobase + 0x02E0)) 
#define GPM4DAT		(*(volatile unsigned long *)(gpiobase + 0x02E4))

