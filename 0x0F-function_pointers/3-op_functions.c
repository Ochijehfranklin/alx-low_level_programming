#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: first number
 * @b: second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a:The first number
 * @b: the second number
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: The number to be multiplied
 * @b: the number to multiply by a
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This returns the result of the divison of a by b
 * @a: the dividend
 * @b: the divisor
 * Return: the result of the divison odf a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the divison of a by b
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the divison of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
