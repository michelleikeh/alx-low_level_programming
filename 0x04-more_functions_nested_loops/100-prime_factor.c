#include <stdio.h>
/**
 * main- entry function prints prime number
 * Return: void
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
