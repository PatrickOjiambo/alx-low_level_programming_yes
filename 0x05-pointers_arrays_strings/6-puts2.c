#include<string.h>
#include "main.h"
/**
 *puts2 - Prints every cha of the string
 *@str: to be printed
 *return: void
 */
void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
