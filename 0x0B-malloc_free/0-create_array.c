#include"main.h"
#include<stdlib.h>

/**
 * create_array - creates an array of characters.
 * @size: size of the array created.
 * @c: character to initialize to.
 * Return: 0 on success.
 */
char *create_array(unsigned int size, char c)
{
	char arr[size];
	int i = 0;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr[i] = c;
	}
	return (arr[i]);
}
