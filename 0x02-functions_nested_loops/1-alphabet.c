#include "main.h"

/**
 * main - This is the entry point
 * description: 'print alphabets in lower case'
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_puthar('\n');
}
