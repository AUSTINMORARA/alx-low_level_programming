#include "dog.h"

/**
 * free_dog - frees a dog.
 * @d: dog being freed.
 */

void free_dog(dog_t *d)
{
	free(d);
}
