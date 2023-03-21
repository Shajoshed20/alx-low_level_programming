#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function to initialize dog
 * @d: pointer to dog attribute
 * @name: variable for dog name in dog attribute
 * @age: varaible for dog age in dog attribute
 * @owner: variable for owner in dog attribute
 *
 * Return: void type
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
