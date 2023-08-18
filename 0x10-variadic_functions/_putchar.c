#include<unistd.h>
/**
 * _putchar - prints a character.
 * @c: character to be printed.
 * 
 * Return - Always 0 (Success)
 */
int _putchar(int c)
{
	write(1, &c, 1);
	return(0);
}
