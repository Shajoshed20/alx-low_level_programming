#include "lists.h"

/**
 * free_listint2 - Function to free the head node
 * @head: variable for dooble pointer to head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *f_head;

	if (head)
	{
		while (*head)
		{
			f_head = (*head);
			*head = (*head)->next;
			free(f_head);
		}
	}
	else
	{
		return;
	}
}
