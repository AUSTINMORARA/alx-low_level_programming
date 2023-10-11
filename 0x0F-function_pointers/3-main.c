#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - perform calculations.
 * @argc: number of arguments.
 * @argv: commandline arguments.
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	char *sign;
	int (*operation)(int, int);
	int num1, num2, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	sign = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(sign);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	answer = operation(num1, num2);

	printf("%d/n", answer);
	return (0);
}
