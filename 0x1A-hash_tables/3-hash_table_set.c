#include "hash_tables.h"
#include <string.h>
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
	hash_node_t *elem = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	if (elem && strcmp(key, elem->key) == 0)
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);
	}

	

	return (1);
}
