#include "hash_tables.h"

/**
 * key_index - function gives you the index of a key.
 * @key: is a pointer to a string.
 * @size: size of the array of the HashTable.
 * Return: integer which is the index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
