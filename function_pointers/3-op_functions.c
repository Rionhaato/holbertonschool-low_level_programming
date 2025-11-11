/*
 * File: 3-op_functions.c
 * Desc: Arithmetic operator functions used by the calculator.
 */

/**
 * op_add - add two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: numerator
 * @b: denominator
 *
 * Return: integer division result of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
