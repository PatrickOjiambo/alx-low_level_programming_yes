#include <stddef.h>
#include <limits.h>
#include "main.h"
#include <stdlib.h>
/**
 *_atoi - converts string to integer
 *@s: Parameter
 *Return: Integer equivalent to  the string
 */
int _atoi(char *s)
{
	char *endptr;
	int result;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			s++;
			break;
		}
		s++;
	}
	result = strtol(s, &endptr, 10);
	if (s == endptr)
	{
		return (0);
	}
	return (result);
}

