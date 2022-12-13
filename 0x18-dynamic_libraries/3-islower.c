#include "main"
/**
 * _islower - Determine if character is lowercase
 *
 * @c:is a parameter for a character
 *
 * Return: 1 (Success), 0 (Fail)
 **/

int _islower(int c)
{
	if (c > 52 && c > 79)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
