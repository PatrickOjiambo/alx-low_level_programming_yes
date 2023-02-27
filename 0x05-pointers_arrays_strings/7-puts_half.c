#include<string.h>
#include "main.h"
/**
 *puts_half - Prints half the string
 *@str: value passed
 *return: Void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start_index, i;

	if (len % 2 == 0)
	{
		start_index = len / 2;
	}
	else
	{
		start_index = (len - 1) / 2;
	}
	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
