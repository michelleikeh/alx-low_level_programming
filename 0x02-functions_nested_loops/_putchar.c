#include <unistd.h>
#include "main.h"

/**
 * _putchar - entry function (prints a character)
 * @c: stdoutput character
*/

void _putchar(char c)
{
	write(1, &c, 1);
}
