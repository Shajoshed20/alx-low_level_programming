#include "hash_tables.h"

/**
 * key_index - Function to get the index of a key
 * @key: Variable for key index
 * @size: Variable for array size
 *
 * Return: The key's index.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
