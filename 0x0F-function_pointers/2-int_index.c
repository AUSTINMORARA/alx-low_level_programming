#include "function_pointers.h"

/**
 * int_index - returns index of the array indicated
 * @array: array being searched through.
 * @size: size of array to go through.
 * @cmp: pointer to function that compares values.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array)
	{
		for(i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
	
	}
}
