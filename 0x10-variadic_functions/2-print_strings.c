#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string printed between strings.
 * @n: number of strings passed.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);

		if (string == NULL)
			printf("(nil)");

		printf("%s", string);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}
