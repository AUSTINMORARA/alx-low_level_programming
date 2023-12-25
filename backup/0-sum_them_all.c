#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all it parameters.
 * @n: number of parameters.
 * @...: variable arguments.
 * Return: 0 if n is 0 and sum of all paramenters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
	va_end(ap);
}
