#include "lists.h"

/**
 * print_dlistint - Function to print number of nodes in list.
 * @h: Variable for the head of list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t items = 0;

	while (h)
	{
		items++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (items);
}
