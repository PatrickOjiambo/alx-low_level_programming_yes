/**
 *print_buffer - Print the buffer
 *@b: Parameter 1
 *@size: Parameter 2
 *Return: void
 */
#include <stdio.h>
#include <ctype.h>
void print_buffer(char *b, int size)
{
	int i,j;

	for  (i = 0; i < size || i % 10 != 0; i++)
	{
		if (i % 10 == 0)
			 printf("%08x:", i);
		if (i < size)
			printf(" %02x", *(unsigned char *)(b+i));
		else
			printf("   ");
		if (i % 10 == 9)
		{
			printf(" ");
			for (j = i - 9; j <= i; j++)
				if (j < size && isprint(*(b+j)))
					printf("%c", *(b+j));
			 	else
					printf(".");
			printf("\n");
		}
	}
	if (size <= 0 || size % 10 != 0)
	printf("\n");
}

