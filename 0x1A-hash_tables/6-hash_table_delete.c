#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *node, *temp;
	unsigned long int i;
	hash_table_t *head = hs;

	for (i = 0; i < hs->size; i++)
	{
		if (hs->array[i] != NULL)
		{
			node = hs->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
