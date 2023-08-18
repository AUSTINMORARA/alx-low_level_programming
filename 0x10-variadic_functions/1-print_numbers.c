#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers = prints numbers.
 * @separator: separates the printed numbers.
 * @n: number of integers passed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if(*separator == '\0')
		{
			continue;
		}
		printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
