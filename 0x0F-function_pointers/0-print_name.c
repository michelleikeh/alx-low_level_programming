#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: input name to print
 * @f: function pointer
 * Retutn: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* check if name and pointer value is not empty */
	/* if so save value */
	if (name && f)
		f(name);
}
