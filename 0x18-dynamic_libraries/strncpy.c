#include "main.h"
/**
 * _strncpy - copy a string with atleast n bytes from src
 * @dest: str 1
 * @src: str 2
 * @n: bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
