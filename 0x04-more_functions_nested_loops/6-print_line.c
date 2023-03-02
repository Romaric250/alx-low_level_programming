#include "main.h"

/**
 * print_line - print lines
 * @n: number of times the lines is to be printed
 *
 * Return: NULL
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
