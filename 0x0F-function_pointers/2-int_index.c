#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched.
 * @size: size of the array.
 * @cmp: pointer to function that compares values.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size <= 0)
		return (-1);
	for (i = 0;i < size; i++)
	{
		if(cmp(array[i]))
			break;
	}
	return (i);
}
