#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function to free a list.
 * @head: Variable for pointer to the list.
 *
 * Return: void type
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
