#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t s1_len, s2_len;

	s1_len = s1 ? strlen(s1) : 0;
	s2_len = s2 ? strlen(s2) : 0;

	result = malloc(s1_len + s2_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		memcpy(result, s1, s1_len);
	}
	if (s2)
	{
		memcpy(result + s1_len, s2, s2_len);
	}
	result[s1_len + s2_len] = '\0';
	return (result);
}

