#include "lists.h"

/**
 * add_dnodeint - This adds a node at the begining
 * @head: pointer to the list
 * @n: value to be added
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != 0)
		(*head)->prev = new;
	*head = new;
	return (new);
}
