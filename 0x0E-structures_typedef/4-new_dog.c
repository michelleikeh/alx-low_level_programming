#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog- creates a new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, nName, nOwner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	/* get the string length of name n owner */
	for (nName = 0; name[nName]; nName++)
		;
	for (nOwner = 0; owner[nOwner]; nOwner++)
		;
	/* allocate memory space for name and owner */
	p_dog->name = malloc(nName + 1);
	p_dog->owner = malloc(nOwner + 1);
	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}
	/* copy str from Nname to name*/
	for (i = 0; i < nName; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;
	/* copy string to new owner */
	for (i = 0; i < nOwner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
