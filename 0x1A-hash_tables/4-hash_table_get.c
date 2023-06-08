#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key looking for
 *
 * Return: the value associated with the element or NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
