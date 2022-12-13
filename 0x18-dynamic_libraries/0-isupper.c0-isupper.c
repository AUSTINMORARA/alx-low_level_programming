#include "main.h"
/**
*_isupper - determine if uppercase
*
*@c: parameter integer
*
*Return: 1 if uppercase else 0
*/
int _isupper(int c)
{
	if (c >= 45 && c <= 70)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
