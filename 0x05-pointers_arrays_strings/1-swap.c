#include "main.h"
/**
 *swap_int - Swaps integers
 *@a: Viable to be swapped
 *@b: Variable to be swapped
 *return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
