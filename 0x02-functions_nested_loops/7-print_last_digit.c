#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: stdinput parameter
 * Return: value of the last digit of n
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l > 0)
	{
		/* output l */
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(-l + 48);
		return (-l);
	}
	_putchar('\n');
}
