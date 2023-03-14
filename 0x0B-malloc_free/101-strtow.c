#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, len = 0, words = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0'))
			words++;
	}
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = 0; j < words; j++)
	{
		while (isspace(str[i]))
			i++;
		for (k = i; str[k] != '\0' && !isspace(str[k]); k++)
			len++;
		arr[j] = malloc((len + 1) * sizeof(char));
		if (arr[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		strncpy(arr[j], str + i, len);
		arr[j][len] = '\0';
		i = k + 1;
		len = 0;
	}
	arr[words] = NULL;
	return (arr);
}

