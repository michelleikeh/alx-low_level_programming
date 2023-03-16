#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 *
 * @c: takes a character stdinput
 *
 * Return: 1 if successful 0 if otherwise
 */

int _isupper(int c)
{
	if (c  >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

