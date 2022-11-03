#include <unistd.h>
#include "main.h"
/**
 * _putchar - inserts a character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
