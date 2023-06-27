#include "main.h"

/**
 * _islower - function tocheck for lower or upper
 * @c: An input character
 * Return: 1 if in lowercase or 0 otherwise
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
