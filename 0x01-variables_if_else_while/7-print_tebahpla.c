#include <stdio.h>

/**
 * main - This is the entry point
 * description: 'Print lowercase alpabets in reverse'
 * Return: Always 0
 */

int main(void)

{
	int x = 122;

	while (x >= 97)
	{
		putchar (x);
		x--;
	}
	putchar('\n');
	return (0);
}
