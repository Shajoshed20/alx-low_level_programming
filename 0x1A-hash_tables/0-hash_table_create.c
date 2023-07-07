#include "hash_tables.h"


/**
 * hash_table_create - Function to create a hash table.
 * @size: Variable for size of the array.
 *
 * Return: On success - a pointer to the newly created hash table.
 *         Otherwise - a NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int index;

	h_table = malloc(sizeof(hash_table_t));
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table == NULL)
		return (NULL);

	if (h_table->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		h_table->array[index] = NULL;

	return (h_table);
}
