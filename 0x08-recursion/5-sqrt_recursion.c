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

/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @min: the minimum possible square root
 * @max: the maximum possible square root
 *
 * Return: the natural square root of n
 */
int _sqrt_helper(int n, int min, int max)
{
	int guess, square;

	if (max < min)
		return (-1);
	guess = (min + max) / 2;
	square = guess * guess;
	if (square == n)
		return (guess);
	else if (square < n)
		return (_sqrt_helper(n, guess + 1, max));
	else
		return (_sqrt_helper(n, min, guess - 1));
}
