#include<stdio.h>
#include<stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...){
	va_list list;

	unsigned int i;

	if (n == 0)
		printf("\n");

	va_start(list,n);
		if (i == n - 1)
		{
			printf("%d\n",va_arg(list,int));
		}
		else
		{
		if(separator == NULL){
			printf("%d",va_arg(list,int));
		}
		else
		{
			printf("%d%s",va_arg(list,int),separator);
		}
		}
		va_end(list);
}
