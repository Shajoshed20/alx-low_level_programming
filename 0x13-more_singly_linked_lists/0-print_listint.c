#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function to print integer list
 * @h: Variable for pointer to the head
 *
 * Return: value stored in the list
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
