#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Function pointer to add new node
 * @head: variable pointer to head node
 * @n: variable to store in new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);

}
