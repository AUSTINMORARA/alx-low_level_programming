#include "variadic_functions.h"

/**
 * print_char - print chacters
 * @ap: list of characters
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integers
 * @ap: list of characters
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print floats
 * @ap: list of characters
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - print strings
 * @ap: list of characters
 */
void print_str(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - prints anything.
 * @format: list of arguments passed to the functions.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j = 0;
	char *separator = "";

	act pr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	va_start(ap, format);

	i = 0;
	while (format && (*(format + i)))
	{
		while (j < 4 && (*(format + i) == (pr[j].str)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			pr[j].print(ap);
			separator = ", ";
		}

		i++;
	}
	va_end(ap);

	printf("\n");
}
