/**
 *main - start of the program
 *@argc: Param 1
 *@argv: Param 2
 *Return: Void
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int count = 0;
  for (int i = 1; i < argc; i++) {
    count++;
  }
  printf("%d\n", count);
  return 0;
}

