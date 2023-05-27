#include "main.h"

/**
 * set_bit - func that set a bit in a given index  = 1.
 * @n: num where the bit is to be set.
 * @index: the location to set the bit at.
 * Return: 1 0r -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	num <<= index;

	if (num == 0)
		return (-1);

	*n |= num;

	return (1);
}
