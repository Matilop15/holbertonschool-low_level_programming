#include "hash_tables.h"
/**
 *hash_table_delete -  a function that deletes a hash table.
 *
 *@ht: is the hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *srcnode, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < (ht->size); idx++)
	{
		srcnode = ht->array[idx];
		while (srcnode != NULL)
		{
			temp = srcnode->next;
			if (srcnode->key != NULL)
				free(srcnode->key);
			if (srcnode->value != NULL)
				free(srcnode->value);
			
			free(srcnode);
			srcnode = temp;
		}
	}
	free(ht->array);
	free(ht);
	free(temp);
	free(srcnode);
}
