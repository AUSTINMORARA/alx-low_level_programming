#include "main.h"

/**
 * _pow_recursion - calculates power.
 * @x: number to find power of.
 * @y: number of times to multiply the x.
 * Return: the value of x raised to power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
