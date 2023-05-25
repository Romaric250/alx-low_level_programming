#include "main.h"

/**
 * binary_to_uint - converts binary to an unsinged int.
 * @b: num to convert.
 * Return: the converted num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nu = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
	nu <<= 1;
	nu += (*b - '0');
	b++;
	}

	return (nu);
}
