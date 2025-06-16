#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Description: This function takes an integer and prints its last digit.
 * It handles both positive and negative numbers by using absolute value.
 * The last digit is obtained using the modulo operator (%).
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        last_digit = -(n % 10);
    else
        last_digit = n % 10;

    _putchar(last_digit + '0');
    return (last_digit);
}

