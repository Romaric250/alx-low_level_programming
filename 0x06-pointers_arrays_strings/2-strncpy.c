#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copied string destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	for ( ; s < n; i++)
		dest[s] = '\0';

	return (dest);
}
