#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into a string
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: NULL in case of failure, and pointer to  new 
	   string on success.
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int argument, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);
	if (string == NULL)
		return (NULL);

	index = 0;

	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			string[index++] = av[argument][byte];

		string[index++] = '\n';
	}

	string[size] = '\0';

	return (string);
}
