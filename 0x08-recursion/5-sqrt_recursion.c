#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns square root of numbers
 *
 * @n: integer to check for the square root
 *
 * Return: The resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find natural numbers
 *
 * @n: number to get natural  square root
 *
 * @x: iterator
 *
 * Return: The resulting square root
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (actual_sqrt_recursion(n, x + 1));
}
