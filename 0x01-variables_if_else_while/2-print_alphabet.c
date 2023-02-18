#include<stdio.h>
/*number2
*main- Print letters of the alphabet from 
* 'a' to 'z'
*
*Return: always 0 (success)
**/
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                putchar(letter);
        }
        putchar('\n');

        return (0);
}
