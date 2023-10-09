#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: Dog's owner.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(dog_t));

	if (dog_t == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
