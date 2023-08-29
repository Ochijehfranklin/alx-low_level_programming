#include "lists.h"

/**
 * pop_listint - This deletes the head node
 * @head: pointer to the first node in the list
 * Return: The valiue the head pointer pointed to before deletion
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}
	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (value);
}

