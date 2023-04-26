#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to set the bit in.
 * @index: The index of the bit to set.
 *
 * Return: 1 upon success, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = m << index;
	m = ~m;
	*n = *n & m;

	return (1);
}
