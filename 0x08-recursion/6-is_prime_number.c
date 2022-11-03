#include "main.h"
/**
 * is_prime - checks if input is a prime number
 * @n: input number
 * @x: divisor
 * Return: 1 for success
 */
int is_prime(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, x + 1));
}

/**
 * is_prime_number - checks if inpuit is a prime number
 * @n: input number
 * Return: 1 for success 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
