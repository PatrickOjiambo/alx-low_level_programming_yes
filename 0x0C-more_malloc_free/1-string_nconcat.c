/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
#include <stddef.h>
#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_str;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		n = s2_len;
	concatenated_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (concatenated_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concatenated_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concatenated_str[i] = s2[j];
	concatenated_str[i] = '\0';
	return (concatenated_str);
}

