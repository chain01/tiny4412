
#include "regs.h"

void (*printf)(char *, ...) = 0x43e11434;
//printf
int test(void)
{
	unsigned long value = 0;
	__asm__ __volatile__ (
		"mrs %0, cpsr\n"
		: "=&r" (value)
	);	

	printf(" value = 0x%x\n", value);
	return 0;
}
