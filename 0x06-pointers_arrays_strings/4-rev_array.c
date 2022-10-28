#include "main.h"
/**
 * reverse_array - reverses th content of a given array
 * @a: array
 * @n: number of element in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, x, y;

	/* initialize the array */
	for (i = 0; i < (n - 1); i++)
	{
		/* output */
		for (x = i + 1; x > 0; x--)
		{
			y = *(a + x);
			*(a + x) = *(a + (x - 1));
			*(a + (x - 1)) = y;
		}
	}

