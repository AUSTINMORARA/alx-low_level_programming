#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument counter(number of arguments).
 * @argv: an array of command line arguments.
 * Return: 0 on Success and 1 and prints 
 * 	   error of number contains a symbol.
 */

int main(int argc, char *argv[])
{
	int i, sum, a;

	if (argc == 1)
	{
		printf("0/n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			a = *argv[i];
			if (a < '0' || a > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
