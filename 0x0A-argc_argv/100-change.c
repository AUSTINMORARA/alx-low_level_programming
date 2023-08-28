#include "main.h"

/**
 * main - prints minimum coins to make change.
 * @argc: number of arguments.
 * @argv: the arguments representing change and coins
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int change, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		while (change > 0)
		{
			if (change >= 25)
			{
				change -= 25;
			}
			else if (change >= 10)
			{
				change -= 10;
			}
			else if (change >= 5)
			{
				change -= 5;
			}
			else if (change >= 2)
			{
				change -= 2;
			}
			else if (change >= 1)
			{
				change -= 1;
			}
			count += 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
