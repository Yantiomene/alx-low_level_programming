#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *item;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			item = ht->array[i];
			while (item)
			{
				if (count == 0)
				printf("'%s': '%s'", item->key, item->value);
				else
				printf(", '%s': '%s'", item->key, item->value);
				count++;
				item = item->next;
			}
		}
		printf("}\n");
	}
}
