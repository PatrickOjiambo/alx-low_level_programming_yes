#include "main.h"
/**
 *print_last_digit- Prints the last digit of a number
 *@n: the number to be checked
 *
 *Return:The last digit of a number
 */
int print_last_digit(int n)
{
	long int c = n;
	if (n < 0)
	{
		c = -c;
	}
	return (c = n % 10);
}
