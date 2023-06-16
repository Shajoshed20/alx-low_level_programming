#include "lists.h"

/**
 * sum_dlistint - Function to sum all the data of the list.
 * @head: Variable for the head of list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
