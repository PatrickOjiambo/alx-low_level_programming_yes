#include <stdlib.h>
 #include <time.h>
/**
 *main- Prints whether the value of n is greater
 *than 5, is zero, or is less than 6 but not zero
 *Return: always zero(SUCCESS)
 */
int main(void)
 { 
         int n;
         
         srand(time(0));
         n = rand() - RAND_MAX / 2;
         
         int last=n % 10;
         
	if (n > 5)
                 printf("Last digit of %d is %d and is greater than 5\n", n, last )
	else if (n == 0)
                 printf("Last digit of %d is %d and is 0\n", n, last);
	else    
                 printf("Last digit of %d is %d and is less than 6 but not zero\n", n, );
	return (0);
}
