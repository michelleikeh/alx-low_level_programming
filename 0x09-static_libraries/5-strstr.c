#include "main.h"
/**
 *  _strstr - finds the first occurrence of the substring.
 *  @haystack:entire string
 *  @needle: substring to find the occurence of
 *  Return:pointer to begining of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hystck;
	char *ndl;

	while (*haystack != '\0')
	{
		hystck = haystack;
		ndl = needle;
		while (*haystack != '\0' && *ndl != '\0' && *haystack == *ndl)
		{
			haystack++;
			ndl++;
		}
		if (!*ndl)
			return (hystck);
		haystack = hystck + 1;
	}
	return (0);
}

