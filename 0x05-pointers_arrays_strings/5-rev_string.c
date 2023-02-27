#include "main.h"
/**
 *rev_string - Reverses a string
 *@s: string to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	int len, i

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}
