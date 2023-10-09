#ifndef DOG_H
#define DOG_H

/**
 * dog - Structure representing a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: dog's owner.
 *
 * Description: The structure represents a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
