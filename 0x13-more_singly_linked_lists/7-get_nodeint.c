#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of linked list
 * @head: pointer to the first node in the list
 * @index: the index of the node returned
 * Return: value to the node we seek, if it exists or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
