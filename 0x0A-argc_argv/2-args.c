#include "main.h"
/**
 * main - print its argument names.
 *
 * @argc: total nummber of arguments.
 * @argv: array of arguments.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 1)
		printf("%s\n", argv[0]);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
