#include"main.h"
#include<stdlib.h>

/**
 * create_array - creates a character array,
 *		  initialize with specific character.
 * @size: size of the array.
 * @c: character to initialize.
 * Return: Pointer to array or NULL on failure.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if ( size == 0 || arr == NULL)
		return (NULL);
	arr[0] = c;
	return (arr);
}
