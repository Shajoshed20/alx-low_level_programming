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
	listint_t *addnode, *newnode;
	unsigned int i = 1;

	if (head)
	{
		newnode = malloc(sizeof(listint_t));

		newnode->n = n;
		if (idx > 0)
		{
			addnode = *head;
			while (addnode)
			{
				if (i == idx)
				{
					newnode->next = addnode->next;
					addnode->next = newnode;

					return (newnode);
				}
				addnode = addnode->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			newnode->next = *head;
			*head = newnode;
		}
		return (newnode);

		if (newnode == NULL)
			return (NULL);
	}
	return (NULL);
}
