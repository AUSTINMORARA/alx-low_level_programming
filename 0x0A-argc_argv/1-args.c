#include<stdio.h>

/**
 * main - prints number of arguments passed to it.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed.
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
