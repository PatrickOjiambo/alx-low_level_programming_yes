/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the string to search
 * @accept: the string of characters to search for
 *
 * Return: a pointer to the byte in s
 *that matches one of the bytes in accept, or NULL if no such byte is found.
 */
#include <stddef.h>
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

