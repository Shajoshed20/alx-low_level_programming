#include "lists.h"

/**
 * free_dlistint - Function to free list.
 * @head: Variable for head of list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
