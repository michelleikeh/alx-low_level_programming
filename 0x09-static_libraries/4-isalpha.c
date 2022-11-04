#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: parameter stdout
 * Return: 1 if c is alphabet and 0 if not
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
