#include "hash_tables.h"

/**
 * hash_table_print - function that print hash table
 * @ht: hash
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *htest;
  
	unsigned long int x = 0, y = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (x = y; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			htest = ht->array[x];
			while (htest)
			{
				printf("%s'%s': '%s'", y == 0 ? "" : ", ",
				       htest->key, htest->value), y++;
				htest = htest->next;
        
			}
		}
	}
  
	printf("}\n");
}
