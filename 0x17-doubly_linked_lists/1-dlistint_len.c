#include "lists.h"

/**
 * dlistint_len - Function to get number of elements in a linked list.
 * @h: Variable for the head of the list.
 *
 * Return: The number of elements in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
