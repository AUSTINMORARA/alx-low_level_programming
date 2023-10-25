#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - returns string length
 * @s: string to find length.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 * @s: string to fing length
 * @len: length of s.
 * @index: The index of the string to be checked.
 * Return: if palindrome return 1 else palindrome return 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to be checked.
 * Return: if palindrome - 1 else return 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len;

	len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}

