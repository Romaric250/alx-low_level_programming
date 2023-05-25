#include "main.h"

/**
 * print_binary - prints the bin repre of a num(int).
 * @num: the number.
 * Return: nothing.
 */

void print_binary(unsigned long int num)
{
	if (num > 1)
	{
		print_binary(num >> 1);
		/*the above is a recursive function*/
	}
	else
	{
		_putchar((num & 1) ? '1' : '0');
	}
}

