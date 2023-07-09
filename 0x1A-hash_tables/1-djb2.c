#include "hash_tables.h"

/**
 * hash_djb2 - implementation of djb2 algorithm
 * @str: hash
 * Return: new hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
  
	unsigned long int hasht;
	int x;
	hasht = 5381;
  
	while ((x = *str++))
	{
		hasht = ((hasht << 5) + hasht) + x; 
	}
  
	return (hasht);
}
