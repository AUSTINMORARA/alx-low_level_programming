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
	int i = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", i);
	return (0);
}
