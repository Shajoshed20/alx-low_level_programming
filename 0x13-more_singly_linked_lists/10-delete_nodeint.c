#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete node.
 * @head: variable for pointer to head.
 * @index: variable for number of nodes deleted.
 *
 * Return: 1 or -1 for success or failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *temp, *buffer = *head;

	if (buffer == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(buffer);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (buffer->next == NULL)
			return (-1);

		buffer = buffer->next;
	}

	temp = buffer->next;
	buffer->next = temp->next;
	free(temp);
	return (1);
}
