#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the strting name
 * @f: the printting function pointer
 *
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
