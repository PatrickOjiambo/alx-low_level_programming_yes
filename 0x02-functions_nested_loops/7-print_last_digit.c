#include<ctype.h>
#include "main.h"
/**
 *print_last_digit- Prints the last digit of a number
 *@n: the number to be checked
 *
 *Return:The last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = abs(n) % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
