#include<unistd.h>
/**
 * main - Entry point
 *
 * Description: This program prints a message to the standard error
 *
 * Return: 1 (Error code)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, str, 59);
    return (1);
}
