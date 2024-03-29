#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched.
 * @size: size of the array.
 * @cmp: pointer to function that compares values.
 * Return: index of the number, and -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0;i < size; i++)
	{
		if (cmp(array[i]) && array[i] != 0)
			return (i);

	}
	return (-1);
}
