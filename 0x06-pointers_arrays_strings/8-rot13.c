#include "main.h"

/**
 * rot13 - encodes stdinput to rot13
 * @s: stdinput
 * Return: s
 */

char *rot13(char *s)
{
	int x = 0;
	int i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + x) == alp[i])
			{
				*(s + x) = rot13[i];
				break;
			}
		}
		x++;
	}
	return (s);

