#include <stdio.h>

/**
 * main - writes the program name.
 * @argc: argument counter(number of arguments).
 * @argv: an array of command line arguments.
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
