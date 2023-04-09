#include "main.h"
#include <limits.h> 
#include <stdbool.h>

int get_bit(unsigned long int n, unsigned int index) {

	unsigned long int mask;
  if (index >= sizeof(unsigned long int) * CHAR_BIT) {
    return -1;
  }

  mask = 1UL << index;
  return (n & mask) ? 1 : 0;
}

