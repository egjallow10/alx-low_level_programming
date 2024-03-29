#include "hash_tables.h"

/**
 * key_index - index position based on key hash and array size
 * @key: const string to be hashed
 * @size: size of array for hash table
 * Return: ulong index for key-value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}