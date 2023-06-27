#include "main.h"

/**
 * _strspn - gets the len of the str seg that contains acept str.
 * @s: string
 * @accept: string
 */

unsigned int _strspn(char *s, char *accept) {
  int i;
  int count = 0;

  for (i = 0; s[i] != '\0'; i++) {
    if (strchr(accept, s[i]) != NULL) {
      count++;
    } else {
      break;
    }
  }

  return count;
}

