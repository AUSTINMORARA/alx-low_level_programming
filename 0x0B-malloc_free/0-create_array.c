#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initialize with a specific char
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: NULL if size is zero
 *	pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = c;

	return (arr);
}
