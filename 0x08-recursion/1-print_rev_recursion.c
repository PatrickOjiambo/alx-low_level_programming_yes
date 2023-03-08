/**
 *_print_rev_recursion - Prints a string in reverse using recursion
 *@s: the string to be printed
 *return: void
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}

