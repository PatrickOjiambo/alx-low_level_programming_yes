#include<stddef.h>
#include<string.h>
#include "main.h"
/**
 * is_palindrome - check if a given string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	/* base case: a string of length 1 is a palindrome */
	if (len == 1)
		return (1);
	if (s[0] == s[len - 1])
		return (is_palindrome(s + 1));
	else
		return (0);
}

