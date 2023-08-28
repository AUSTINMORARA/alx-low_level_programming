#include "main.h"

/**
 * main - print no. of arguments passed to it.
 * @argc: count the number of arguments.
 * @argv: holds the character arguments.
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
