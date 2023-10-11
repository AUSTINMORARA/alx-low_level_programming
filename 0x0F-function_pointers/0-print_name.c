#include "main.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: function pointer to function that prints.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
