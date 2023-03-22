/**
 * print_name - Prints a name using a given function
 *
 * @name: A pointer to a string containing the name to print
 * @f: A pointer to the function that will be used to print the name
 *
 * Return: None
 */
#include <stddef.h>
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

