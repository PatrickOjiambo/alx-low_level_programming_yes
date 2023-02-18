#include<stdio.h>
/**
 *main-Print all single digit numbers of base 10
 *with the use of putchar function only
 *Return: always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return(0);
}
