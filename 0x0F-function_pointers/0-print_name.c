#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - execute a function
 * @name: parameter that function needs
 * @f: pointer to a function
 *
 * Description: prints name using function pointers
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
