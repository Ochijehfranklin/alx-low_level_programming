#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
