#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
 	long int largest_factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
			if (factor > largest_factor)
			{
				largest_factor = factor;
			}
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest_factor);
	return 0;
}

