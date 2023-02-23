#include "main.h"

/**
 * @n: An integer input
 * Description: Tthe function prints the last digit of a number. 
 * Return: last digit of any number n.
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		m = -1 * (n % 10);
	else
		m = n % 10;

	_putchar((m % 10) + '0');
	return (m % 10);
}
