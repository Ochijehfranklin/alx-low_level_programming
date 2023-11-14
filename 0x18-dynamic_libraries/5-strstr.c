#include "main.h"

/**
 * _strstr - This function finds a given string in another string
 *
 * @haystack: String to be searched for another string
 *
 * @needle: the string to search in haystack
 *
 * Return: The string fund in the haystack
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *hay_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr && *needle_ptr == *hay_ptr)
		{
			needle_ptr++;
			hay_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
