/**
 *_isupper - Checks if a number is uppercase
 *@c: The number to be checked
 *
 *Return: Returns 1 if c is uppercase, else it returns 0
 */
#include "main.h"
#include<ctype.h>
int _isupper(int c)
{
	if (isupper((c)))
		return (1);
	else
		return (0);
}
