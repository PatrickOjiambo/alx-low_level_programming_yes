/**
 *main - Prints alphabet ten times
 *
 *Return: always 0 (true)
 *
 *
 */

#include "main.h"
void print_alphabet_x10(void)
{
	char letter;

	int j;

	for (letter = 'a';letter <= 'z';letter++)
	{
		_putchar(letter);
		for(j = 0; j <= 10; j++)
		{
			_putchar('\n');
		}
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
