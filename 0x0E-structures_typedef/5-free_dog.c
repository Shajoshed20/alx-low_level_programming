#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function using free to clear dog_t
 * @d: The dog to be freed.
 *
 * Return: void type
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
