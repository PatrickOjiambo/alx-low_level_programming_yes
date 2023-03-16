/**
 * _calloc - allocate memory for an array and set it to zero
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;
	return (mem);
}

