#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints string followed by a new line.
 * @separator: string to be printed between strings
 * @number of strings passed to the function.
 * @...: represents the unnamed variables.
 */
void prints_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char **strs;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s",va_arg(ap, char[i]));
		if (*separator != '\0')
			printf(',');
	}
	va_end(ap);
}
