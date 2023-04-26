#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 & 1 chars.
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	int j = 0;

	while (b[j] != '\0')
	{
		if (b[j] == '0' || b[j] == '1')
		{
			num = num << 1;

			if (b[j] == '1')
				num = num | 1;
		}
		else
		{
			return (0);
		}

		j++;
	}

	return (num);
}
