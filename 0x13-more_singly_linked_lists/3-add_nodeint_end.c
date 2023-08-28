#include "lists.h"

/**
 * add_nodeint_end - add a node at end of singly linked list
 * @head: the pointer to the first elem in singly linked list
 * @n: data to add at the end of list
 * Return: pointer to new nond
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}


