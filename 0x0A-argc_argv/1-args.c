#include<stdio.h>

/**
 * main - prints number of arguments passed to it.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed.
 * Return: number of arguments passed.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc);
	return (0);
}
