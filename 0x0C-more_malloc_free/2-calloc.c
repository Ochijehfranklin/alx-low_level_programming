#include <stdlib.h>
#include "main.h"

/**
 * *-memset - This fills the memory with a constant byte
 * @s: memory to be filled
 * @b: charcater to copy
 * @n: number of times to copy b
 * Return: A pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each of the element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
