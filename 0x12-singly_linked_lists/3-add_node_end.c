#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Function to add node to ende of list.
 * @head: variable to double pointer for the head of list
 * @str: Variable for the string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
  * _strlen - function for the length of a string
  * @len: Variable for string to count
  *
  * Return: String length
  */
int _strlen(const char *len)
{
	int s = 0;

	while (*len)
	{
		len++;
		s++;
	}

	return (s);
}
