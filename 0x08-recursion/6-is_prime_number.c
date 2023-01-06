#include "main.h"

/**
 * is_prime_number - check for prime
 * @n: number to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (_is_prime_number(int n, 2));
}

/**
 * _is_prime_number - finds out whether a number is prime or not
 * @n: number which to chexk for prime
 * @i: number from where to check
 * Return: 0 or 1
 */

int _is_prime_number(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (_is_prime_number(n, i + 1));
}
