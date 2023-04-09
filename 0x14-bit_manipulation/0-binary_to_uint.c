#include <stddef.h>  
#include <stdint.h>  
#include <string.h> 
#include "main.h"
uint32_t binary_to_uint(const char *b) {

	size_t len;
	uint32_t result;
	size_t i;
  if (b == NULL) {
    return 0;
  }


  len = strlen(b);
  result = 0;
  for (i = 0; i < len; i++) {
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

