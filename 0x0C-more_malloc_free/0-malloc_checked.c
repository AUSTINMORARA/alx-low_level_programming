#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}
	return (ptr);
}
