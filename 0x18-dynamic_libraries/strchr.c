#include "main.h"

/**
 * _strchr - returns pointer to first occrenc of char c.
 * @s: string
 * @c: char
 */
char *_strchr(char *s, char c) {
  int i;

  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      return &s[i];
    }
  }

  return NULL;
}

