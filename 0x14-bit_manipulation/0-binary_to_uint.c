#include "main.h"

/**
 * binary_to_uint - converts binary to an unsinged int.
 * @n: num to convert.
 * Return: the converted num.
 */
unsigned int binary_to_uint(const char *n)
{
	int j = 0;
	unsigned int nu = 0;

	if (n == NULL)
	{
		return (0);
	}
	while (n[j] != '\0')
	{
		if (n[j] == '0')
		{
			nu = nu << '1';
		}
		else if (n[j] == '1')
			nu = (nu << 1) | 1;
		else
			return (0);
		j++;
	}
	return (nu);
}
