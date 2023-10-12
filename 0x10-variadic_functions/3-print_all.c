#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of arguments passed to the functions.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *separator = "";

	act pr[] = {{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	va_start(ap, format);

	i = 0;
	while (format)
	{
		while (i < 4)
		{
			if (*(format + i) == pr[i].str)
			{
				printf("%s", separator);
				pr[i].print(ap);
				separator = ", ";
			}
			return;
			i++;
		}
	}
	printf("\n");

	va_end(ap);
}
