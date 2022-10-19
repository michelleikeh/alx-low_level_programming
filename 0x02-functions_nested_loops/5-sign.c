#include "main.h"

/**
 * print_sign - check if int is +ve or -ve
 * @n: integer to check
 * Return: 1 for +ve 0 for 0 and -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		/* stdout + */
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		/* stdout - */
		_putchar(45);
		return (-1);
	}
	else
	{
		/* stdout 0 */
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
