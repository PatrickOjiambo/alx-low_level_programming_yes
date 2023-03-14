/**
 *create_array - Function to create an array
 *@size: Size of the array
 *@c: Another parameter
 *Return: Return character.
 */
#include <stdlib.h>
#include "main.h"
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

