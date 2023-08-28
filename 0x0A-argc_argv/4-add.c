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
	int sum = 0;
	int n = atoi(argv[i]);

	if (argc == 1)
		printf("%d\n", 0);

	while (i < argc)
	{
		if (!isdigit(n))
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
