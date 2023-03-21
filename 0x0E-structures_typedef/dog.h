#ifndef DOG_H
#define DOG_H

/**
 * struct dog - userdefined type for dog attribute
 * @name: variable for dog name
 * @age: variable dog's age
 * @owner: variable for dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog dog_t - Typedef for dog structure
 */



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
