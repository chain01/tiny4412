
#include "regs.h"

void led_on(void);
void led_off(void);
int test(void)
{
	//All leds is on the CoreBoard
	led_on();
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
