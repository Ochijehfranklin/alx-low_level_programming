#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to first nod e in list
 * Return: the number of elemnts in frred list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			if (diff > 0)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
				length++;
			}
			else
			{
				free(*h);
				*h = NULL;
				length++;
				break;
			}
		}
	}
	*h = NULL;
	return (length);
}
