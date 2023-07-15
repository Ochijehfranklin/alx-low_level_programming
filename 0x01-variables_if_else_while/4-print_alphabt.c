#include <stdio.h>

/**
 * main - Entry point
 * description: 'Print lowercase char except q and e
 * Return: Always 0
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
