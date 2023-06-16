#include "lists.h"

/**
 * add_dnodeint - Function to add a new node at the beginning of the list.
 * @head: variable to head of the list.
 * @n: variable for number to me added.
 *
 * Return: - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
