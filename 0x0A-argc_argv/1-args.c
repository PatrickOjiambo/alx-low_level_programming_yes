/**
 *main - start of the program
 *@argc: Param 1
 *@argv: Param 2
 *Return: Void
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;
	for(counter=0; counter<argc; counter++)
		printf("%d",counter);
	
	return 0;
}

