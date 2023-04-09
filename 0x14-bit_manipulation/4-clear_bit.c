#include "main.h"
#include <limits.h>  // for CHAR_BIT

int clear_bit(unsigned long int *n, unsigned int index) {
  if (index >= sizeof(unsigned long int) * CHAR_BIT) {
    return -1;  // index out of range
  }

  *n &= ~(1UL << index);
  return 1;
}

