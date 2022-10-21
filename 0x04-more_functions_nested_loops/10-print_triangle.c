#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: no of lines
 * Return: void
 */

void print_triangle(int size)
{
	int i, n;

	for (i = 0; i < size; i++)
	{
		for (n = 1; n < (size - 1); n++)
			_putchar(32);
		for (n--; n < size; n++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
