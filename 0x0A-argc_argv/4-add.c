#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument counter(number of arguments).
 * @argv: an array of command line arguments.
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	int i, sum, a;

	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (!isdigit(a))
		{
			printf("Error\n");
			return (1);
		}
		else if (a < 0)
		{
			return (0);
		}
		else
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
