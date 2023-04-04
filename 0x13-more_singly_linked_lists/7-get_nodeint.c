#include "lists.h"

/**
 * get_nodeint_at_index - Function to finf node index number.
 * @head: variable to pointer to the head.
 * @index: The index of the node to locate.
 *
 * Return: NULL or node located.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int data;

		for (data = 0; data < index; data++)
		{
			if (head == NULL)
			{
				return (NULL);
			}

			head = head->next;

		}
	return (head);
}
