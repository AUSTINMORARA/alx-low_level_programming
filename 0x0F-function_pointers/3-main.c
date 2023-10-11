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
	char *sign, symbol;
	int (*operation)(int, int); 
	int num1, num2, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	symbol = argv[2][0]

	if ((symbol != '+' ||symbol != '-' ||symbol != '/' ||symbol != '*' ||symbol != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
                exit(99);
	}

	num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);

	if ((symbol == '/' || symbol == '%') && num2 == 0)
	{
	 	printf("Error\n");
                exit(100);
	}

	sign = argv[2];

	operation = get_op_func(sign);

        answer = operation(num1, num2);

	printf("%d/n", answer);

	return (0);
}
