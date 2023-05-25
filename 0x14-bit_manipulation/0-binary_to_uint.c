#include "main.h"

/**
 * binary_to_uint - converts binary to an unsinged int.
 * @b: num to convert.
 * Return: the converted num.
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int nu = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] == '0')
		{
			nu = nu << '1';
		}
		else if (b[j] == '1')
			nu = (nu << 1) | 1;
		else
			return (0);
		j++;
	}
	return (nu);
}
