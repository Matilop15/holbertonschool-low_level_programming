#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: size of the array
 * Return: pointer new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_hash = NULL;

	if (size <= 0)
		return (NULL);

	n_hash = malloc(sizeof(hash_table_t) * size);
	if (n_hash == NULL)
		return (NULL);

	return (n_hash);
}
