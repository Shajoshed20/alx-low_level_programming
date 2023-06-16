#include "lists.h"

/**
 * add_dnodeint_end - Function to add node to end of list.
 * @head: Variable to end of the list.
 * @n: Variable for ingeter in new node.
 *
 * Return: the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_pos;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last_pos = *head;
	while (last_pos->next != NULL)
		last_pos = last_pos->next;
	last_pos->next = new_node;
	new_node->prev = last_pos;

	return (new_node);
}
