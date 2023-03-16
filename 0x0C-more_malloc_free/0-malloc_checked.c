/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 * If malloc fails, the function terminates the program with a status of 98
 */
#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

