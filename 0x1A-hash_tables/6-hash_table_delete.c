#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currt = NULL;
	unsigned long int x = 0;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x])
			{
        
				currt = ht->array[x];
				free(currt->key);
				free(currt->value);
				ht->array[x] = ht->array[x]->next;
				free(currt);
        
			}
		}
	}
	free(ht->array);
  
	free(ht);
}
