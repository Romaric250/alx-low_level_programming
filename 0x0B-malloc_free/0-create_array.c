#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array.
 * @size: gives the size of the array.
 * @c: value to be entered in the array.
 *
 * Return: a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pointer;

	if (size == 0)
		return (NULL);

	pointer = malloc(sizeof(c) * size);

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pointer[i] = c;
	return (pointer);
}
