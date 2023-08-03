#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - determines if an integer can be considered prime
 *
 * @n: the element to evaluate
 *
 * Return: if prime 1, if not prime 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - This calculates if number is recursively prime
 *
 * @n: number to evaluate
 *
 * @x: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prime(n, x - 1));
}
