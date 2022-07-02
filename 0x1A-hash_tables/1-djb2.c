#include "hash_tables.h"

/**
 * hash_djb2 - function implements djb2 algorithm.
 * @str: is a pointer to string that represents a
 * key of a hash_node_t.
 *
 * Return: unsigned long int used to index into a
 * hash_table_t.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
