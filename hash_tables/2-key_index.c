#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table, or 0 if key is NULL or if something went wrong
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = hash_djb2(key);
	return (hash_value % size);
}
