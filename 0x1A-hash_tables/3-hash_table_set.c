#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 *@ht: is the hash table you want to add or update the key/value to.
 *@key: is the key. key can not be an empty string.
 *@value:  is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elem = NULL, *new_node = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem && strcmp(key, elem->key) == 0)
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->next = ht->array[idx];
	new_node->value = strdup(value);
	ht->array[idx] = new_node;

	return (1);
}
