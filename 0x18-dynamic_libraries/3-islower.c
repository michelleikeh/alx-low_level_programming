#include "main.h"

/**
 * _islower - checks for lower case alphabets
 * @c:parameter
 * Return: 1 for success 0 for others
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
