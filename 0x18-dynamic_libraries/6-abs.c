#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: stdinput parameter
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
