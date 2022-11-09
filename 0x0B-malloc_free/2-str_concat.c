#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: array of character pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (x = 0; x < i; x++)
		strout[x] = s1[x];
	y = j;
	for (j = 0; j <= y; x++, j++)
		strout[x] = s2[j];
	return (strout);
}

