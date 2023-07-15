#include <stdio.h>

/**
 * main - This is the entry point
 * description: 'Single base ten digits'
 * Return: Always 0
 */

int main(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
