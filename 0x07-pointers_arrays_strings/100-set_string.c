#include "main.h"

/**
 * set_string - set the value of pointer
 *
 * @s:a pointer that points to another pointer
 *
 * @to: the pointer that would be pointed to fr a value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
