#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: A function pointer to the printing function.
 * Description: This function takes a name and a function pointer and
 * invokes the provided function to print the name.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
