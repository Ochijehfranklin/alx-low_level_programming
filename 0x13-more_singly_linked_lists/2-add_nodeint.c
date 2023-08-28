#include "lists.h"

/**
 * add_nodeint - This adds new node at the beginning
 * @head: pointer to nodes
 * @n: new data to add at beginning of node
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
