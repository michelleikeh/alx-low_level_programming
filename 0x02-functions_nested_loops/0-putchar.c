#include "main.h"

/**
 *main - entry function
 *Return: always success(0)
*/

int main(void)
{
	/* get ascii of _putchar */
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	/* get the length of array (n = sizeofarry/sizeofarray[0]) */
	int n = sizeof(str) / sizeof(int);
	int i;

	for (i=0; i<n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);

}
