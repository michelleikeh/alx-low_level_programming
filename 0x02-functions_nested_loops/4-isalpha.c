#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: parameter stdout
 * Return: 1 if c is alphabet and 0 if not
 */
int _isalpha(int c)
{
	int i;

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
