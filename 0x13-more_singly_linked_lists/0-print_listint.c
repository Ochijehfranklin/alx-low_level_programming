#include "lists.h"

/**
 * print_listint - prints the number of listint_t
 * @h: pointer to the node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}
