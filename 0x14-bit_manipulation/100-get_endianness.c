#include "main.h"
int get_endianness(void) {
  unsigned int value;
  unsigned char *ptr;
  value = 0x12345678;
  *ptr = (unsigned char *)&value;
  if (*ptr == 0x78) {
    return 1; // little endian
  } else {
    return 0; // big endian
  }
}

