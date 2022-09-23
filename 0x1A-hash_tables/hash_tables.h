#ifndef __HASH_TABLES_H__
#define __HASH_TABLES_H__
#include <stdlib.h>

/**
 * struct hash_node_s - of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key; /* unique key as string */
	char *value; /* value corresponding to key */
	struct hash_node_s *next; /* pointer to the next node of the list */
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size; /* size of array */
	hash_node_t **array; /* pointers to heads of linked lists for chaining */
} hash_table_t;


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key; /* unique key as string */
	char *value; /* value corresponding to key */
	struct hash_node_s *next; /* pointer to the next node of the list */
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size; /* size of array */
	hash_node_t **array; /* pointers to heads of linked lists for chaining */
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);


#endif /* __HASH_TABLES_H__ */