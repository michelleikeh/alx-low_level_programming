#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return void
 */
void times_table(void)
{
	int a, b, x;
	x = a * b;
	
	for (a = 0; a < 10; a++)
	{
		_putchar(48);
		for ( b = 0; b <= 9; b++)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}
				
