#include "main.h"
#include <stdio.h>

/**
 * _atoi-  converts string to integer function
 *  @s: string stdinput
 *  Return: integer
 */
int _atoi(char *s)
{
	unsigned int i, j, k, m;

	i = k = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		k = k * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (k);
}
