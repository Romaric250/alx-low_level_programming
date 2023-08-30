#include "hash_tables.h"

/**
 * hash_djb2 - Hash function to implement djb2 algorithm.
 * @str: string to hash.
 *
 * Return: the hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashs;
	int counts;

	hashs = 5381;
	while ((counts = *str++))
		hashs = ((hashs << 5) + hashs) + counts;

	return (hashs);
}
