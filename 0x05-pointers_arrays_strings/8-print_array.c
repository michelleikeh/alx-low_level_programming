#include "main.h"

/**
 * print_array- prints elements of an array
 * @a: array element
 * @n: no of emenets in an array
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
