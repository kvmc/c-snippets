#include <stdio.h>

void pf0(void)
{
	printf("Hello ptr 0\n");
}
void pf1(void)
{
	printf("Hello ptr 1\n");
}
void pf2(void)
{
	printf("Hello ptr 2\n");
}
int main(void)
{
	void (*afp[])() = {pf0,pf1,pf2};

	afp[0]();
	afp[1]();
	afp[2]();

	return 0;
}
