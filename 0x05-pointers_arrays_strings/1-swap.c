#include "main.h"

/**
 * swap_int- function to swap pointers
 * @a: parameter to swap
 * @b: parameter to swap with
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
