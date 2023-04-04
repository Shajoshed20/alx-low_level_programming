#include "lists.h"

/**
 * pop_listint - function to delete the head node.
 * @head: variable for double pointer to head node's address
 *
 * Return:  0 or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL)
		return (0);

	node = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (data);
}
