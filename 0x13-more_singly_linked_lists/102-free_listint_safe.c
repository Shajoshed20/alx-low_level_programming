#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Function to free a list
 * @h: variable for pointer to a pointer to the head
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *addnode, *buffer;
	size_t i = 0;

	if (h == NULL || *h == NULL)
		return (0);

	addnode = *h;
	*h = NULL; /* Set head to NULL to avoid dereferencing it later */

	while (addnode != NULL)
	{
		i++;
		buffer = addnode;
		addnode = addnode->next;
		free(buffer);

		/* Check for loop */
		if (addnode == *h)
		{
			free(addnode);
			break;
		}
	}
	return (i);
}
