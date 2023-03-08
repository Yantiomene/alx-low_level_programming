#include "main.h"

/**
 * prime_check -  Check if a number is prime
 * @n: given number
 * @i: iterator
 *
 * Return: 1 if prime and 0 otherwise
 */

int prime_check(int n, int i)
{
	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		if (i == n / 2)
			return (1);
	}
	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (prime_check(n, 2));
}
