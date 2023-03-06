/**
 * _strstr - locates a substring.
 *
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
#include <stddef.h>
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i, k = 0; needle[k] && haystack[j] == needle[k]; j++, k++)
			;

		if (needle[k] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}

