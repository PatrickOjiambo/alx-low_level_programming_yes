/**
 *_strdup - Function to be created
 *@str:only parameter
 *Return: Return integer
 */
#include <stdlib.h>
#include <string.h>
#include "main.h"
char *_strdup(char *str)
{
	char *duplicate = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL)
	{
		return "failed to allocate memory";
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}

