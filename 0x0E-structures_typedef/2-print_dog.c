#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 *
 * @d: dog to be printed.
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	if (d->age == 0.0)
                printf("Age: (nil)\n");
	printf("Age: %.2f", d->age);
	if (d->owner == NULL)
                printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
