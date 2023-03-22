#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Pointer to the name string
 * @f: Pointer to a function that takes a char pointer and returns void
 *
 * Description: This function prints a name by calling a function pointed to
 * by f, passing the name as an argument.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
