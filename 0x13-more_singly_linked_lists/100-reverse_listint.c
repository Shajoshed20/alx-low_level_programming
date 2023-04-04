#include "lists.h"

/**
 * reverse_listint - Function to reverse list.
 * @head: variable to head pointer
 *
 * Return: first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *front;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}
