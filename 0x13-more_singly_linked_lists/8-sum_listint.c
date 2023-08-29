#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node
 * Return: Total of all int in linked list
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
