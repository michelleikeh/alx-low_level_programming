#include "main.h"

/**
 * print_alphabet_x10 - function to print a-z 10 times
 * return 0
*/

void print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
