#include "3-calc.h"

/**
 * opp_add - calculates sum of ints
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two ints
 * @a: first integer
 * @b: second integer
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two ints
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: division a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of division of two ints
 * @a: first int
 * @b: second int
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return(a % b);
}
