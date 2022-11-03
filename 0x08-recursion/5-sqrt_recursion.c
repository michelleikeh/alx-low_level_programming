#include "main.h"
/**
 * find_sqrt - returns natural square root of a given number
 * @n: stdinput number
 * @x: iterator
 * Return: x for success -1 for failur
 */

int find_sqrt(int n, int x)
{
	/* check if x is a multiple of n */
	if (x % (n / x) == 0)
	{
		/* check if x is the square root of n */
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + find_sqrt(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: input number
 * Return: natural square root of number/
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 2));
}
