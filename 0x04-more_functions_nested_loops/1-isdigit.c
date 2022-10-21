#include "main.h"

/**
 * _isdigit - check if input is digit
 * @c: std input
 * Return: 1 for sucess 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
