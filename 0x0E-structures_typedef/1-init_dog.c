#include <stdio.h>
#include "dog.h"

/**
 * init_dog - struct dog
 * @d: input the struct
 * @name: input of the dog
 * @age: input age of the dog
 * @owner: input owner of the dog
 * owned by: SmoxHakim
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
