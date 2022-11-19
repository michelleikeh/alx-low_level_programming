#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array list
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: 0 if success, -1 if no elements matches
 * or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
