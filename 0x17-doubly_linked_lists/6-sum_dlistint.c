#include "lists.h"

/**
 * sum_dlistint - Sums all the data of list
 * @head: The head of the list
 * Return: Returns (sum) ie the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
