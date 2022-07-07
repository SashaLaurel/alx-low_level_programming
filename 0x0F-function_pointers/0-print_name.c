#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);

}
