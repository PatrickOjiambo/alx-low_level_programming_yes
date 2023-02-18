#include<stdio.h>
/**
 *main- Print letters of the alphabet from 
 *'a' to 'z' aprt from the letters 'q' and 'e'
 *
 *Return: Always zero(success)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter!='e') || (letter!='q'))
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
