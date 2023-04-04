#include "lists.h"

/**
  * add_nodeint_end - Function to adds a new node to
  *					the end of a linked list
  * @head: variable for pointer to head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return:  new element or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last;

	newnode = malloc(sizeof(listint_t));
	if (head)
	{
		newnode->n = n;
		newnode->next = NULL;
		if (*head == NULL)
		{
			*head = newnode;
			return (*head);
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;

			last->next = newnode;
			return (last);
		}

		if (newnode == NULL)
		{
			return (NULL);
		}
	}
	return (NULL);
}
