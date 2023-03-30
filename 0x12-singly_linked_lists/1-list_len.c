#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked
 * @h: Variable for linked list.
 *
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}

