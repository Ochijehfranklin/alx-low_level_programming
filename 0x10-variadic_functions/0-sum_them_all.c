#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all args up
 * @n: number of integers to sum
 * @...: parameters to add
 * Return: Always (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
