#include  <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an array of integers
 * @min: the minimum value of the range (inclusive)
 * @max: the maximum value of the range (inclusive)
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		arr[i] = min;
	return (arr);
}

