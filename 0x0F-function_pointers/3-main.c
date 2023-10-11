#include "3-calc.h"
#include <stdlib.h>

/**
 * main - perform calculations.
 * @argc: number of arguments.
 * @argv: commandline arguments.
 * Return: 0 on Success
 */
int main()
{
	int (*operation)(int, int) = get_op_func(argv[2]);

	answer = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d/n", answer);
}
