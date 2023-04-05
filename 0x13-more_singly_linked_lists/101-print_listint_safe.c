#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - fucntion to prints a linked list
 * @head: variable for pointer to head node
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *tortoise = head, *hare = head;

	if (head == 0)
		return (0);

	if (head)
	{
		while (tortoise && hare && hare->next)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			hare = hare->next->next;

			if (tortoise == hare)
			{
				printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
				exit(98);
			}
			i++;
		}

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}

		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}

		return (i);
	}
}
