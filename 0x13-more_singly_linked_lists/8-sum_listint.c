#include "lists.h"

/**
  * sum_listint - Function to add data in nodes
  * @head: variable for head node
  *
  * Return: integer type
  */
int sum_listint(listint_t *head)
{
	int num = 0;

	while (head)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
