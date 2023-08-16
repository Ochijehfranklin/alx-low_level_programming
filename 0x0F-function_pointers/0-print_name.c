#include "function_pointers.h"

/**
 * print_name - This prints the name which the function points to
 * @name: The name to print
 * @f:function pointer to name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
