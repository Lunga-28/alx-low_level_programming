#include "hash_tables.h"

/**
 * hash_table_get - function that will get value of a key
 * @ht: hash table
 * @key: key
 * Return: key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x = 0;
	hash_node_t *temphash;

	if (ht == NULL || key == NULL)
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	temphash = ht->array[x];

	for (; temphash != NULL; temphash = temphash->next)
	{
		if (strcmp(temphash->key, key) == 0)
      
			return (temphash->value);
	}
  
	return (NULL);
}
