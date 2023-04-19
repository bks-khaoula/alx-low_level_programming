#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that print name using pointer to function
 * @name: string
 * @f: function's pointer
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
