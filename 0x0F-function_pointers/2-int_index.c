#include "function_pointers.h"
#include<stdbool.h>

/**
 * int_index - searches for a specific integer.
 * @array: array being searched through.
 * @size: size of array to go through.
 * @cmp: pointer to function that compares values.
 * Return: returns the index of the integer if foundi.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool theone = false;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			theone = cmp(array[i]);
			while (theone)
			{
				return (i);
			}
		}
		while (theone == false)
		{
			return (-1);
		}
	}
}
