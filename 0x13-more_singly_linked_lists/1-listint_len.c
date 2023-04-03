#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function to return the number of elements
 *                  in linked list.
 * @h: Variable for pointer to address in the head
 *
 * Return: value stored in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t e; /*e for Elements in list*/

	for (e = 0; h; e++)
	{
		h = h->next;
	}

	return (e);
}
