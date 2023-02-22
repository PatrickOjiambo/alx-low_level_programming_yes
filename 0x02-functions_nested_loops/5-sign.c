#include "main.h"
/**
 *print_sign() - This function returns 1 and prints 
 * + if n is greater than 0
 *@n - The value to be checked
 *
 *
 *Return:
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n ==  0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}	
}

