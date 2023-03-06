/**
 *_strchr -  locates a character in a string.
 *@s:Parameter 1
 *@c: Parameter 2
 *Return: pointer to the first occurrence of the character c in
 *the string s, or NULL if the character is not found
 */
#include "main.h"
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

