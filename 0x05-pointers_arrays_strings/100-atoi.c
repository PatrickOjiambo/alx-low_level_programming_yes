#include <limits.h>
#include "main.h"
/**
 *_atoi - converts string to integer
 *@s: Parameter
 *Return: Integer equivalent to  the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit = s[i] - '0';

	if (s == NULL)
	return (0);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return ((sign == -1) ? INT_MIN : INT_MAX);
			}
			result = result * 10 + digit;
		}
		else
		{
			break;
		}
		i++;
	}
	return (result * sign);
}

