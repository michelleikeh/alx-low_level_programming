#include "dog.h"
#include <stdlib.h>
/**
 * free_dog- frees space allocated to dog
 * @d: struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
