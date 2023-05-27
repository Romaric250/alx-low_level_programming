#include "main.h"

/**
 * get_bit - fubction that gets a bit at an index.
 * @n: number to get git from.
 * @index: the location of the bit we are looking for
 * Return: val of the bit or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 0x01;

	num <<= index;

	if (num == 0)
		return (-1);
	if ((n & num))
		return (1);
	else
		return (0);
}

