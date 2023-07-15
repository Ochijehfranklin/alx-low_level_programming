#include <stdio.h>

/**
 * main - This is the entry point
 * description: 'Print all pssible combination of single digits'
 * Return: Always 0
 */

int main(void)

{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
