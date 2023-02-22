#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 1, c = 2;
	int sum_even = 0;

	while (c <= 4000000)
	{
		if (c % 2 == 0)
		{
			sum_even += c;
		}
		a = b;
		b = c;
		c = a + b;
	}

	printf("%d\n", sum_even);
	return (0);
}

