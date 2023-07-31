#include "./hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 * @ht: pointer to the hash table
 *
 * Description: Key/value pairs are printed
 */
void hash_table_print(const hash_table_t *ht)
{
	
	unsigned long int i;
	unsigned char _flag = 0;
  	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			_flag = 1;
		}
	}
	printf("}\n");
}
