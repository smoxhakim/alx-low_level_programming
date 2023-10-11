#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name of the user
 * @name: input name
 * @f: function pointer
 * owned by: SmoxHakim
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
