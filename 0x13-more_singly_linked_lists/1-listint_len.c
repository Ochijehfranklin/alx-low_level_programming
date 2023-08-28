#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked list
 * @h: pointer to the elements in a node
 * Return: Number of elements in the node
 */

size_t listint_len(const listint_t *h)
{
	size_t numofelems = 0;

	while (h != NULL)
	{
		numofelems++;
		h = h->next;
	}
	return (numofelems);
}
