#include "hash_tables.h"

/**
 * key_index - calculate the index of a key in the hash table array
 * @key: key string
 * @size: size of the array
 *
 * Return: index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
