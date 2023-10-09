#include "dog.h"

/**
 * init_dog - initializes dog.
 * @d: A specific dog.
 * @name: name of the dog.
 * @age: dog's age.
 * @owner: dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
