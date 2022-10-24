#include <unistd.h>
#include "main.h"

/**
 * _putchar- function to write single character
 * @c: single character to output
 * Return: returns @c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
