#include "main.h"
#include <limits.h>  // for CHAR_BIT
#include <stdbool.h> // for bool

int get_bit(unsigned long int n, unsigned int index) {
  if (index >= sizeof(unsigned long int) * CHAR_BIT) {
    return -1;  // index out of range
  }

  unsigned long int mask = 1UL << index;
  return (n & mask) ? 1 : 0;
}

