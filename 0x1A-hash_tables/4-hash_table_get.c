#include "hash_tables.h"

/**
 * hash_table_get - function retrieves the value associated
 * with a key
 *
 * @ht: is a pointer to hash_table_t
 * @key: is a pointer to key
 *
 * Return: value associated with a key, NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node) ? node->value : NULL);
}
