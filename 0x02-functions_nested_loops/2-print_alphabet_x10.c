#include "main.h"

/**
 * print_alphabet_x10 - function
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10x
 * Return: NULL.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
