#include "main.h"
#include <stdlib>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: memory location of array
 *Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	char i;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(c) * size);
	if (ch == NULL)
		return (NULL);

	/* craete the array */
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
