#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert node at specific location
 * @head: variable for header
 * @idx: variable for the index to locate
 * @n: variable for number to be stored
 *
 * Return: NULL of address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *newnode, *addnode = *head;

	if (head == NULL)
		return (NULL);

	if (head)
	{
		newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
			return (NULL);
		newnode->n = n;

		for (a = 0; a < (idx - 1); a++)
		{
			if (addnode == NULL || addnode->next == NULL)
				return (NULL);

			addnode = addnode->next;
		}

		newnode->next = addnode->next;
		addnode->next = newnode;

		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
