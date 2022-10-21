#include "main.h"

/**
 * print_most_numbers - prints numbers 013456789
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
