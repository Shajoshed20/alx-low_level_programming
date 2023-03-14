#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array of characters
 *		and initialises with a specific character.
 * @size: variable for the array size
 * @c: variable for the character initialized
 *
 * Return: character type
 */

char *create_array(unsigned int size, char c)
{
	char *ch;		/*array of characters*/
	unsigned int i;		/*content of the array*/

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(char));

	if (ch == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
