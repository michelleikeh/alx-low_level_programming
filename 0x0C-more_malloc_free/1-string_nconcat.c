#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: amount of byte
 * Return: pointer to the allocated memory
 * if malloc fails returns a value of 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int str1, str2, concat, i;
	/* check for empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get lenght of s1 and s2 */
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0'; str2++)
		;
	/*if s2 is longer than n, make s2 == n */
	if (n > str2)
		n = str2;
	/* concat s1 and s2 using + */
	concat = str1 + n;
	/* allocate space in memory using stren() + 1 method */
	s = malloc(concat + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < concat; i++)
		if (i < str1)
			s[i] = s1[i];
		else
			s[i] = s2[i - str1];
	s[i] = '\0';
	return (s);
}
