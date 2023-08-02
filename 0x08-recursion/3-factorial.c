#include "main.h"

/**
 * factorial - prints factorial of numbers
 *
 * @n: the number to print factorial of
 *
 * Return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
