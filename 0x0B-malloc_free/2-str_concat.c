#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *str_1;
	unsigned int i, j, k, max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str_1 = malloc(sizeof(char) * (i + j + 1));

	if (str_1 == NULL)
	{
		free(str_1);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str_1[k] = s1[k];

	max = j;
	for (j = 0; j <= max; k++, j++)
		str_1[k] = s2[j];

	return (str_1);
}
