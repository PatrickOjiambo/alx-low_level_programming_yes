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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = 1;
		}
		else if (s[i] == '+')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result == 0)
			{
				result = sign * atoi(s + i);
			}
			else if (result > 0)
			{
				result = sign * atol(s + i);
			}
			else
			{
				result = sign * atoll(s + i);
			}
			break;
		}
		i++;
	}
	return (result);
}
