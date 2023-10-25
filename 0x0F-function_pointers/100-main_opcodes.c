#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int by, i;
	char *opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < by; i++)
	{
		printf("%.2x", opcode[i] && 0xFF );

		if (i != by - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
