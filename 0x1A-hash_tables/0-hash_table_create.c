#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: size of the array
 * Return: pointer new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *n_table = NULL;

	if (size == 0)
		return (NULL);

	n_table = malloc(sizeof(hash_table_t));
	if (n_table == NULL)
		return (NULL);

	n_table->array = malloc(sizeof(hash_node_t *) * size);
	if (n_table->array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		n_table->array[i] = NULL;

	n_table->size = size;

	return (n_table);
}
