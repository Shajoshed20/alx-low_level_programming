#include "lists.h"

/**
 * print_listint - Function to print integer list
 * @h: Variable for pointer to the head
 *
 * Return: value stored in the list
*/
size_t print_listint(const listint_t *h)
{
	int list;

	for (list = 0; h; list++)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (list);
}
