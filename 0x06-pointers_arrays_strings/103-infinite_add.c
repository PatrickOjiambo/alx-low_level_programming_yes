/**
 *infinite_add - Infinite add
 *@n1: nnn
 *@n2: jsjs
 *@r: param r
 *@size_r: Param 0
 *Return: Pointer to the result or 0 if the result cannot be stored in 'r'
 */
#include<string.h>
#include "main.h"
#include<stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), carry = 0;
	int i = len1 - 1, m;
	int j = len2 - 1;
	int k = 0;
	char temp;
	int digit1, digit2, sum;

	while (i >= 0 || j >= 0)
	{
		digit1 = i >= 0 ? n1[i] - '0' : 0;
		digit2 = j >= 0 ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		if (k >= size_r - 1)
			return (0);
		r[k++] = sum + '0';
		i--;
		j--;
	}
	if (carry > 0)
	{
		if (k >= size_r - 1)
			return (0);
		r[k++] = carry + '0';
	}
	r[k] = '\0';
	for (m = 0; m < k / 2; m++)
	{
		temp = r[m];
		r[m] = r[k - 1 - m];
		r[k - 1 - m] = temp;
	}
	return (r);
}

