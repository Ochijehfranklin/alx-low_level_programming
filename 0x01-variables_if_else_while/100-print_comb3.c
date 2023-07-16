#include <stdio.h>

/**
 * main - THis is the entry point
 * description: 'Print two digits'
 * Return: Always 0
 */

int main(void)

{
	int x;
	int y;

	for (x = 48; x <= 58; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			utchar(y);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
