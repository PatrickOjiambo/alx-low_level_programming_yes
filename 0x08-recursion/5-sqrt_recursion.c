/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n,
 *or -1 if n does not have a natural square root
 */
#include "main.h"
#include <math.h>
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

