#include "lists.h"

/**
 * find_listint_loop - Function to find the first node in a loop
 *			in a linked list.
 * @head: variable for pointer to the head node of the linked list.
 *
 * Return: If there is no loop, NULL. Otherwise, a pointer to the first node
 *         in the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (tortoise && hare)
	{
		tortoise = tortoise->next;
		hare = hare->next ? hare->next->next : NULL;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);

		}
	}
	return (NULL);
}
