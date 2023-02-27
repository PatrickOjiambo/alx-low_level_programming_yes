#include "main.h"
/**
 *_puts - Prints astring followed by new line
 *@str: value to be printed
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

