#include "function_pointers.h"

/**
 * print_name - Function to print name.
 * @name: Variable for name printed.
 * @f: Variable for pointer.
 *
 * Return: void type
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
