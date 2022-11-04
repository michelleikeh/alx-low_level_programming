#include "main.h"

/**
 * _strcmp- compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (x == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		x = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (x);
}
