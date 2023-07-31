#include "hash_tables.h"

/**
 * key_index - get the index at which a key/value pair.
 * @key: the key 
 * @size: The size of the array hash
 *
 * Return: index key.
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
