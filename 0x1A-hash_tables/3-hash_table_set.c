#include "hash_tables.h"

/**
 * hash_table_set - Function to add or update an element in hash table.
 * @ht: Variable for a pointer to the hash table.
 * @key: Variable for key to add.
 * @value: Variable for value to key.
 *
 * Return: On success - 1.
 *         Otherwise - 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ele;
	char *temp_value;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp_value = strdup(value);
	if (temp_value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = temp_value;
			return (1);
		}
	}

	ele = malloc(sizeof(hash_node_t));
	if (ele == NULL)
	{
		free(temp_value);
		return (0);
	}
	ele->key = strdup(key);
	if (ele->key == NULL)
	{
		free(ele);
		return (0);
	}
	ele->value = temp_value;
	ele->next = ht->array[i];
	ht->array[i] = ele;

	return (1);
}
