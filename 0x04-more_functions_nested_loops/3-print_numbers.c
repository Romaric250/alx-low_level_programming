#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9.
 *
 * Return: NULL
 */


void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
