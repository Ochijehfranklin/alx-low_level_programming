#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in list
 * @head: The head of list
 * @index: node to be loacted
 * Return: If the node does not exist returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == 0)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
