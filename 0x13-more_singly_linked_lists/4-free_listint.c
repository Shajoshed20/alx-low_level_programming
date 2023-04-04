#include "lists.h"

/**
 * free_listint - Function to free list
 * @head: variable for pointer to head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
