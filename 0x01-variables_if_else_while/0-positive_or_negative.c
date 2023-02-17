#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Main-main function is here
 *Description-Code is contained here
 *Rturns-Returns success
 */
int main (void)

	{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive", n);
	else if (n==0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
	}
