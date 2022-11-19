#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: 1st number
 * @b: 2nd Number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the module of two numbers
 * @a: 1st n umber
 * @b: 2nd number
 *
 * Return: remainer of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
