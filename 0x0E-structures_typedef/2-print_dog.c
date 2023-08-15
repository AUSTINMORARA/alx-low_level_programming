#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the members of a dog struct.
 * @d: Struct dog initialized.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
        	return;
	
	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", d->name);
        
	if (d->age < 0)
		printf("Age:(nil)");
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner:(nil)");
	printf("Owner: %s\n", d->owner);
}
