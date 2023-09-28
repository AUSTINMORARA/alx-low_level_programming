#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
