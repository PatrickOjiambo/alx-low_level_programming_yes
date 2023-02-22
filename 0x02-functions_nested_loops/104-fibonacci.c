#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by a comma
 *              and a space, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib;
	int i;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", fib1, fib2);

	/* Calculate and print the next 96 Fibonacci numbers */
	for (i = 3; i <= 98; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}

