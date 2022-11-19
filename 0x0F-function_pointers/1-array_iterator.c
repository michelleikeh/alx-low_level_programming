#include "function_pointers.h"
/**
 * array_iterator - executes a func given as
 * a parameter on each element of an array
 * @size: size of array
 * @array: array
 * @action:pointer to the function neededfor use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
