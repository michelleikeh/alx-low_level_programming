#include "../dog.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	dog_t my_dog;

	my_dog.name = "poppu";
	my_dog.age = 3.5;
	my_dog.owner = "bob";
	printf("My name is %s, and I am %.1f :0 - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
