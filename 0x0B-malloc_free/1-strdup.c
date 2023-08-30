#include "main.h"

/**
 * _strdup - Returns a pointer to new space allocated
 * @str: string to be copied.
 *
 * Return - Always 0 (Success)
 */
char *strdup(char *str)
{
	int i , j;
	char *s;

	if (str == NULL)
		return (0);

	j = 0;
	while (*(str + j))
		j++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= j; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
