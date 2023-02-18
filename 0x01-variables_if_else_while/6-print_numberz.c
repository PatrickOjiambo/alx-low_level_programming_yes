#include<stdio.h>
/**
 *main-Print all single digit numbers of base 10
 *with the use of putchar function only
 *Return: always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar ('\n');
 	return(0);
}
