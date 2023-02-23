/**
 *_isdigit - Checks if a number is a digi
 *@c: the number to be checked
 *Return: Return 1 if c is a digit else return 0
 */
#include "main.h"
#include <ctype.h>
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

