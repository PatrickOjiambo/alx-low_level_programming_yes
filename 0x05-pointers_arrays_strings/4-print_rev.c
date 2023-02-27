#include "main.h"
/**
 *print_rev - Prints a string in reverse
 *@s: The value
 *Return: void
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
