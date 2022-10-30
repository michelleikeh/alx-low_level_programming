#include "main.h"

/**
 * _strncat- joins 2 strings
 * @dest: destination
 * @src: source
 * @n: byte amount used from src
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
