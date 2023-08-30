#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value paired with the key
 * @ht: pointer to hash
 * @key: The key to get the value of.
 *
 * Return: If key - NULL.
 *         else - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index
  	hash_node_t *node;
  
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
