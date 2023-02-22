#include "main.h"
/**
 *print_last_digit- Prints the last digit of a number
 *@n: the number to be checked
 *
 *Return:The last digit of a number
 */
int print_last_digit(int n)
{
	int c;
	
	if(n < 0)
	{
		n = -n;
	}
	c = n % 10;
	_putchar(c + '0');
	return (c);
}
