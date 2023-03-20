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
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
