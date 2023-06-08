#include "hash_tables.h"

/**
 * create_node - create a new hash_node_t
 * @key: key for the node
 * @value: value of the node
 *
 * Return: A pointer to the new node or Null if failded
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (!node || !key || *key == '\0')
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update key/value to
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 (successful) or o (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *item;
	unsigned long int index;

	if (!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	item = ht->array[index];

	while (item)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (1);
		}
		item = item->next;
	}

	node = create_node(key, value);
	if (!node)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
