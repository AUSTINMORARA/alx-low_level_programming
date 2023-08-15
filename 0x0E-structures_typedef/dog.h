#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure represents a dog.
 * @name: Name of the dog.
 * @age: age of the dog.
 * @owner: name of the dogs owner.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
