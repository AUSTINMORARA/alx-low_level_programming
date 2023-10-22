#include "main.h"

/**
 * prime - detects a prime number.
 * @n: input.
 * @i: iterates.
 * Return: 1 if n is prime, otherwise 0.
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		return (0);
	}
	return (0 + prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if prime.
 * @n: integer to be checked.
 * Return: 1 if number is prime else return 0
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	return (prime(n, 2));
}
