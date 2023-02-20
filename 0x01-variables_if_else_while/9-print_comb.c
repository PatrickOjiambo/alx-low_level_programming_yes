#include<stdio.h>
/**
 *main-Prints all possible combinations 
 *of single digit numbers
 *uses the putchar function only
 *Return: always 0(Success)
 */
int main(void)
{
	int n, comma;
	
	comma = 0;

	for (n = 0; n < 10; n++)
	{
		if (comma == 1)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n + '0');
		comma == 1;
	}
	putchar('\n');
	return (0);
}
