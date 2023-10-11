#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on every element of array.
 * @array: array with elements to be executed.
 * @size: size of the array.
 * @action: pointer to function used.
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	/*declaring counter variable*/
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
