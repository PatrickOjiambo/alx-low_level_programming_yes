/**
 *_strlen_recursion - Prints the length of a string
 *@s: The string
 *Return: the length of the string
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
