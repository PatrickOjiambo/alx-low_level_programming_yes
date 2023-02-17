#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Main-main function is here
 *
 *Description: This function prints the specifie
 *error message to the
 *console. It is typically used in
 *error-handling code to provide more
 *information about the nature of the error.
 *
 *Return: Returns success
 */
int main(void)

	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
	}
