#include "hash_tables.h"

/**
 * hash_table_set -...
 * @ht: hash table
 * @key:the key
 * @value: value that goes with key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *currt = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	currt = ht->array[i];

	for (; currt != NULL; currt = currt->next)
	{
		if (strcmp(currt->key, key) == 0)
		{
			if (strcmp(currt->value, value) != 0)
			{
				free(currt->value);
				currt->value = strdup(value);
			}
		return (1);
		}
	}

	new = _node_(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}


/**
 * _node_ - create a new node
 * @key: key
 * @value: value of  key
 * Return: ptr to new node else NULL
 */
hash_node_t *_node_(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
    
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
    
	}

	new_node->next = NULL;
  
	return (new_node);
}
