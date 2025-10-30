#include "main.h"

/**
 * prime_check - helper to test divisibility recursively
 * @n: number to test
 * @i: current divisor
 *
 * Return: 1 if prime, otherwise 0
 */
static int prime_check(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - determines if an integer is a prime number
 * @n: integer to evaluate
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prime_check(n, 2));
}

