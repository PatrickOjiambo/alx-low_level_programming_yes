#include<stdio.h>
/*
 * main - This program prints the lowercase letters of the  alphabet in reverse
 *
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
