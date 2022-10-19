#include "main.h"

/**
 * print_alphabet - prints alphabet function
 * Return: void
*/

void print_alphabet(void)
{
	int i;
	/* take ascii of a(97) and z(122) */

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
