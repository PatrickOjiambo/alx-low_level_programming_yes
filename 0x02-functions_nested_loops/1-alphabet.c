#include "main.h"
/**
 *main - Prints the alphabet in lowercase
 *
 *Return: always 0(success)
 */
int main(void)
{
	void print_alphabet()
	{	char letter;

		for (letter = 'a'; letter <= 'z'; letter++) 
		{
			_putchar(letter);
		}
		_putchar('\n');
				
	
	}
	print_alphabet();
	return 0;
}
