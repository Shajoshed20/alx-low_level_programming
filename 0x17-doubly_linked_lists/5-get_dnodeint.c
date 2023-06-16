#include "lists.h"

/**
 * get_dnodeint_at_index - Function to return nth node.
 * @head: Variable for head of list.
 * @index: varible for position of list.
 *
 * Return: the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
