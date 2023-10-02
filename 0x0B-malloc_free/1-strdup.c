#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new string
 *	     which is a duplicate of string str.
 * @str: string to be duplicated.
 * Return: pointer to string duplicate.
 */

char *_strdup(char *str)
{
	char *arr = malloc(sizeof(char *));

	if (arr == NULL || str == NULL)
		return (NULL);
	strcpy(arr, str);
	return (arr);
}
