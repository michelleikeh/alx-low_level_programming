#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a varaible of type struct dog
 *@d: struct variable to use
 * @name: name of dog
 * @age: dos's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
