#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a struct
 * @d: struct to initialize
 * @name:  name
 * @age:  age
 * @owner:  owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
