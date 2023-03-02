#include "main.h"

/**
 * print_triangle - prints a triangle of # .
 * @n: size of triangle .
 *
 * Return: NULL
 */


void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= (n - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
