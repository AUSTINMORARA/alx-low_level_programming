#include "main.h"
/**
*swap_int - swap two integers' values
*@a: first integer
*@b: second integer
*Return:always: 0
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
