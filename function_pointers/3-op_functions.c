#include "3-calc.h"

/**
 * op_add - it calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - it calculates the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - it calculates the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - it calculates the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - it calculates the remainder of the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
