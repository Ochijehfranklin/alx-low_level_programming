#include "main.h"
#include <stdlib.h>

/**
 * set_string - set the value of pointer
 *
 * @s:a pointer that points to another pointer
 *
 * @to: the pointer that would be pointed to fr a value
 */

void set_string(char **s, char *to)
{
	if (s == NULL || to == NULL)
		return;

	*s = malloc(strlen(to) + 1);

	if (*s == NULL)
	{
		fprintf(stderr, "Memory allocation failed. \n");
		return;
	}
	strcpy(*s, to);
}
