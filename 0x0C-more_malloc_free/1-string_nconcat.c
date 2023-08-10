#include "main.h"
#include <string.h>

/**
 * string_nconcat - This concatenates two strings
 *
 * @s1: firststring to be copied
 *
 * @s2: second string to copy to s1
 *
 * @n: bytes to be copied
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}

	size_t s1_length = strlen(s1);
	size_t s2_length = strlen(s2);
	size_t result_length = s1_len + (n >= s2_len ? s2_len : n);

	char *result = (char *)malloc(result_len + 1)

	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, (n >= s2_len ? s2_len : n));

	result[result_len] = '\0';

	return (result);
}
