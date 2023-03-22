#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
        int i, bytes;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        bytes = atoi(argv[1]);

        if (bytes < 0)
        {
                printf("Error\n");
                return (2);
        }

        for (i = 0; i < bytes; i++)
                printf("%02hhx ", *((char *)main + i));

        printf("\n");

        return (0);
}

