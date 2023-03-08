/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n,
 *or -1 if n does not have a natural square root
 */
#include "main.h"
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	root = _sqrt_helper(n, 1, n / 2);
	return (root);
}

