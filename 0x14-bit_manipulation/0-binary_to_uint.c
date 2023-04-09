#include <stddef.h>  // for NULL
#include <stdint.h>  // for uint32_t
#include <string.h>  // for strlen
#include "main.h"
uint32_t binary_to_uint(const char *b) {
  if (b == NULL) {
    return 0;
  }

  size_t len = strlen(b);
  uint32_t result = 0;

  for (size_t i = 0; i < len; i++) {
    if (b[i] == '0') {
      result = (result << 1);
    } else if (b[i] == '1') {
      result = (result << 1) | 0x01;
    } else {
      return 0;
    }
  }

  return result;
}

