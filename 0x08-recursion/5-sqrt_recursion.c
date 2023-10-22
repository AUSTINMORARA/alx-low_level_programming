#include "main.h"

/**
 * square - finds the square root.
 * @n1: number
 * @n2: testing number.
 * Return: square root.
 */

int square(int n1, int n2)
{
	if (n2 * n2 > n1)
		return (-1);
	else if (n2 * n2 == n1)
		return (n2);
	else
		return (square(n1, n2 + 1));
	return (1);
}

/**
 * _sqrt_recursion - returns a square root of a number.
 * @n: number to find the square root for.
 * Return: square root of the number, -1 if fails.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square(n, 1));
}
