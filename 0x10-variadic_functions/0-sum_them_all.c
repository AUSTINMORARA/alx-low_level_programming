#include<stdarg.h>
/**
 * sum_them_all - returns sum of its parameters.
 * @n: number of parameters.
 */ 
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	int sum = 0;

	va_start(ag, n);
	if (n == 0)
	{
		return(0);
	}
	for(; i < n; i++)
	{	
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}
