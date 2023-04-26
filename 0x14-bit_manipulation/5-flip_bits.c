#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count_bit = 0;
	unsigned long int flip_bit = n ^ m;

	while (flip_bit > 0)
	{
		if ((flip_bit & 1) == 1)
		{
			count_bit++;
		}

		flip_bit = flip_bit >> 1;
	}

	return (count_bit);
}
