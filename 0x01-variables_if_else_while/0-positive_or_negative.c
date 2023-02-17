#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Main-main function is here
 *
 *Description: This function prints the specifie
 *string whether the value of n is negativ, positive
 *or equal to zero
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
