#include "hash_tables.h"

/**
 * key_index - function that will return index of a key
 * @key: key to get the index
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  
	return (hash_djb2(key) % size);
  
}
