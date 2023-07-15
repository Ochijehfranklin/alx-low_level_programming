#include <stdio.h>

/**
* main - this is the main function
* description - 'Lowercase with putchar'
* Return: Always 0
*/
int main(void)
{
	int x = 97;

	while (x <= 122)

	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
