#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  // Check that the correct number of arguments were passed
  if (argc != 3) {
    printf("Error\n");
    return 98;
  }

  // Parse the arguments as integers
  int num1 = 0;
  int num2 = 0;

  for (int i = 0; argv[1][i] != '\0'; i++) {
    if (!isdigit(argv[1][i])) {
      printf("Error\n");
      return 98;
    }
    num1 = num1 * 10 + (argv[1][i] - '0');
  }

  for (int i = 0; argv[2][i] != '\0'; i++) {
    if (!isdigit(argv[2][i])) {
      printf("Error\n");
      return 98;
    }
    num2 = num2 * 10 + (argv[2][i] - '0');
  }

  // Multiply the numbers and print the result
  int result = num1 * num2;
  printf("%d\n", result);

  return 0;
}

