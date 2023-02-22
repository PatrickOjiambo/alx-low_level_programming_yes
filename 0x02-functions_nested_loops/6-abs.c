#include<ctype.h>
#include "main.h"
/**
 *_abs - Prints the absolute value of a number
 *@n: Number to be checked
 *
 *Return: Absolute value of n
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}

