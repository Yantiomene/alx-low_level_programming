#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: size of the array of shash_node_t
 *
 * Return: the pointer to the shash_table_t created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!sht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * create_node - create a new shash_node_t
 * @key: key for the node
 * @value: value of the node
 *
 * Return: A pointer to the new node or Null if failded
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;
	return (node);
}

/**
 * add_shash_node - add a node in the sorted dll
 * @ht: shash_table_t
 * @node: shash_node_t to ne added
 *
 * Return: nothing
 */
void add_shash_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *scurr, *sprev;
	int cmp;

	scurr = sprev = ht->shead;

	while (scurr)
	{
		cmp = strcmp(node->key, scurr->key);
		if (cmp == 0)
			return;
		if (cmp < 0)
		{
			node->sprev = scurr->sprev;
			if (scurr->sprev)
				scurr->sprev->snext = node;
			else
				ht->shead = node;

			scurr->sprev = node;
			node->snext = scurr;
			return;
		}
		sprev = scurr;
		scurr = scurr->snext;
	}
	node->sprev = sprev;
	node->snext = NULL;

	if (ht->shead)
		sprev->snext = node;
	else
		ht->shead = node;
	ht->stail = node;
}


/**
 * shash_table_set - add a new element to a shash_table_t
 * @ht: hash_table to be set
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 (success) or 0 (otherwise)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *item;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			add_shash_node(ht, item);
			return (1);
		}
		item = item->next;
	}

	node = create_node(key, value);

	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	add_shash_node(ht, node);
	return (1);
}

/**
 * shash_table_get - retriev an element from the shash_table_t
 * @ht: shash_table_t
 * @key: key of the element to be retrieved
 *
 * Return: the value of the element
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *item;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(key, item->key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the shash_table using the sorted linked list
 * @ht: shash_table_t
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *item;
	unsigned long int count = 0;

	if (!ht)
		return;
	item = ht->shead;
	printf("{");
	while (item)
	{
		if (count == 0)
			printf("'%s': '%s'", item->key, item->value);
		else
			printf(", '%s': '%s'", item->key, item->value);
		count++;
		item = item->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the shash_table_t in the reverse other
 * @ht: shash_table_t
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *item;
	unsigned long int count = 0;

	if (!ht)
		return;

	printf("{");
	item = ht->stail;
	while (item)
	{
		if (count == 0)
			printf("'%s': '%s'", item->key, item->value);
		else
			printf(", '%s': '%s'", item->key, item->value);
		count++;
		item = item->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete the shash_table_t
 * @ht: shash_table_t
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *item, *curr;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while ((curr = item) != NULL)
		{
			item = item->next;
			free(curr->key);
			free(curr->value);
			free(curr);
		}
	}
	free(ht->array);
	free(ht);
}
