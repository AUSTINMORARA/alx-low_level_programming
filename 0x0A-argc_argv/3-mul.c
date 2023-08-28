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
	int res = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
