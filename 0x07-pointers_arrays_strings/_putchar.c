#include "main.h"
#include <unistd.h>
/**
 * _putchar- funtion to add character
 * @c: character to print
 * Return: 1 for success
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
