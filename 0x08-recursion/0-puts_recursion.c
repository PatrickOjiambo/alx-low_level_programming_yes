/**
 *_puts_recursion - The function puts in recursion
 *@s: String to be printed
 *Return: void
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
