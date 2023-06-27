#include "main.h"
/**
 * _memcpy - copies content of memory are pointe by src
 * @dest: string
 * @src: string
 * @n: integer
 */


char *_memcpy(char *dest, char *src, unsigned int n) {
  int i;

  for (i = 0; i < n; i++) {
    dest[i] = src[i];
  }

  return dest;
}

