#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
        int cents, coins;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        cents = atoi(argv[1]);

        if (cents < 0)
        {
                printf("0\n");
                return (0);
        }

        coins = cents / 25;
        cents = cents % 25;

        coins += cents / 10;
        cents = cents % 10;

        coins += cents / 5;
        cents = cents % 5;

        coins += cents / 2;
        cents = cents % 2;

        coins += cents;

        printf("%d\n", coins);
        return (0);
}

