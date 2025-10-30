#include "main.h"

/**
 * sqrt_check - Helper function to check for the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 * 
 * Return: natural square root of n if found, otherwise -1
 */
int sqrt_check(int n, int guess)
{
	long prod = (long)guess * guess;

	if (prod == n)
		return (guess);
	if (prod > n)
		return (-1);
	return (sqrt_check(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to compute the square root for
 * 
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */	 
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (0);
    return (sqrt_check(n, 1));
}
