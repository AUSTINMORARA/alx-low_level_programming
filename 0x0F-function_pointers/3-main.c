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
	char *sign, symbol = argv[2][0];
	int (*operation)(int, int); 
	int num1, num2, answer;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((symbol != '+' ||symbol != '-' ||symbol != '/' ||symbol != '*' ||symbol != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
                exit(99);
	}
	if ((symbol == '/' || symbol == '%') && num2 == 0)
	{
	 	printf("Error\n");
                exit(100);
	}

	operation = get_op_func(sign);

        answer = operation(num1, num2);

	printf("%d/n", answer);

	return (0);
}
