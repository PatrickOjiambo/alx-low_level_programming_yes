#include "main.h"
/**
 *main - Prints the alphabet in lowercase
 *
 *Return: always 0(success)
 */
void print_alphabet()
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return 0;
}
