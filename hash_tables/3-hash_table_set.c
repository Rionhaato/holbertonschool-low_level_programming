/*
 * File: 3-hash_table_set.c
 * Author: Joshua
 */

#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: Hash table.
 * @key: Key string (cannot be empty).
 * @value: Value to store (duplicated).
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *value_cp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_cp;
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_cp);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_cp);
		free(node);
		return (0);
	}

	node->value = value_cp;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
