#include "lists.h"

/**
 * dlistint_len - returns number of elemetns in list
 * @h: pointer to first element in list
 * Return: Numbwer of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
