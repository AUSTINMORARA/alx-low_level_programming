#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return:: pointer to spot  in  s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for  (i = 0; *(s + i) != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	
	if (*s == c)
		return (s);

	return (0);

}


