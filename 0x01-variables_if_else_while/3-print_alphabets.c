#include<stdio.h>
/**
 * main - Prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
        	putchar(letter);
	}

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	
	/* Print new line */
	putchar('\n');

	return (0);
}

