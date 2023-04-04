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

	if (head)
	{
		for (data = 0; data < index; data++)
		{
			if (data == index)
				return (head);

			head = head->next;

		}
		return (NULL);
	}
}
