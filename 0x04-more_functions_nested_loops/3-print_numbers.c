/**
 *print_numbers() - Prints numbers from 0 to 9
 *Return: Always 0(success)
 */
#include "main.h"
void print_numbers(void) 
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

