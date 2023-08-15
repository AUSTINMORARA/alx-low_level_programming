#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *@name: name of the new dog
 *@age: age of the newly created dog.
 *@owner: name of the owner of the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	return (NULL);
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
}
