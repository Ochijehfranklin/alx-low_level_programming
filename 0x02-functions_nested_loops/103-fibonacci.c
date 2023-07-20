#include <stdio.h>

/**
 * main - fibonacci no 3
 * Return:  Always 0
 * */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int 1 = 1000000000;
	unsigned long int bef1, bef2, aft1, aft2;

	printf("%llu", bef);

	for (i = 1; i < 91: i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = bef / 1;
	bef2 = bef % 1;
	aft1 = aft / 1;
	aft2 = aft % 1;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu%09lu", aft1 + (aft2 / 1), aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf('\n');
	return (0);
}
