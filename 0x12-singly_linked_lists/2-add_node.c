#include "lists.h"
#include <string.h>

/**
 * add_node - Function to add a new node at the beginning
 * @head: Variable for a double pointer to the head.
 * @str: Variable for string to be added to the list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *i;
	int j;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = strdup(str);
	if (i == NULL)
	{
		free(new);
		return (NULL);
	}

	for (j = 0; str[j];)
		len++;

	new->str = i;
	new->j = j;
	new->next = *head;

	*head = new;

	return (new);
}
