#include "main.h"
/**
 * _strstr - locates the first ocurrence os the substring needle.
 * @haystack: char
 * @needle - needdle
 */

char *_strstr(char *haystack, char *needle) {
  int i;
  int j;
  int len;

  len = 0;
  while (needle[len] != '\0') {
    len++;
  }

  for (i = 0; haystack[i] != '\0'; i++) {
    for (j = 0; j < len; j++) {
      if (haystack[i + j] != needle[j]) {
        break;
      }
    }

    if (j == len) {
      /* Found needle */
      return &haystack[i];
    }
  }

}

