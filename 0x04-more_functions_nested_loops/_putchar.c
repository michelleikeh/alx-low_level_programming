#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character
 * @c: stdoutput character
 * Return: void
 */

void _putchar(char c)
{
	write(1,  &c, 1);
}
