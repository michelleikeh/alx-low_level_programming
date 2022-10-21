#include "main.h"

/**
 * print_line - draws a straight line
 * @n: no of times _ is to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
