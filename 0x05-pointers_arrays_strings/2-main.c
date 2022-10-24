#include "main.h"
#include <stdio.h>

/**
 * main- function to check code
 *
 * Return Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strenlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
