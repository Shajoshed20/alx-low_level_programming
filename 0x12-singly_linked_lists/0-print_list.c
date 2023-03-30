#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function to prints all the elements in a list.
 * @h: Variable for list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
