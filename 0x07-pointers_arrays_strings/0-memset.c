/**
 *_memset - function to copy memory byte
 *@s:Parameter 3
 *@b:Parameter 2
 *@n: Parameter 1
 *Return: pointer to the memory area s
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}

