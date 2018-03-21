

#include "regs.h"

void led_on(void);
void led_off(void);
void (*printf)(char *, ...) = 0x43e11434;
int test(void)
{
	//K2 <----> GPX3-3,  0 == Keydown, 1 == Keyup
	GPX3CON &= ~(0xf << 12); //Configure GPX3-3 as input for K2
	while(1) {
		if (GPX3DAT & ( 1 << 3)) {
			led_off();
		} else {
			printf("key down.\n");
			led_on();
		}
	}	

	return 0;
}


void led_on(void)
{
	GPM4CON  &= ~0xffff;
	GPM4CON  |=  0x1111;
	GPM4DAT  |=  0xf;
}

void led_off(void)
{
	GPM4CON  &= ~0xffff;
	GPM4CON  |=  0x1111;
	GPM4DAT  &= ~0xf;
}
