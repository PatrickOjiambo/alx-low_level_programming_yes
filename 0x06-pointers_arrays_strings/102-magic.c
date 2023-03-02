#include <stdio.h>

/**
 * main - Prints the value of an integer through a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int *p;
    int a[5];

    a[2] = 98;
    /* add your line of code here */
    p = &n;
    /*
     * You are not allowed to modify the following line.
     * You can only add code above it.
     */
    printf("a[2] = %d\n", *(a + 2));
    return (0);
}

