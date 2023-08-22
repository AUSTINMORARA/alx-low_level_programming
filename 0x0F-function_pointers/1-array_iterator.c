#include<stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on array elements.
 * @array: array of elements to be executed on.
 * @action: function to execute through the elements.
 * @size: size of the array beigh acted on.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return;
	}
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
