#include <stdio.h>
#include "funtion_pointers_h"

/**
 * print_name - prints a name.
 * @name: pointer to name
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
