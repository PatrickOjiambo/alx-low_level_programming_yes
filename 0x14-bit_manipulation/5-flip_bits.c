#include "main.h"
/**
 * flip_bits - computes the number of bits that need to be flipped to convert one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

