#include "main.h"

/**
 * print_square - prints a square of len using #
 * @len: length of the square
 *
 * Return: NULL
 */


void print_square(int len)
{
	int i, j;

	if (len <= 0)
		_putchar('\n');

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < (len); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
