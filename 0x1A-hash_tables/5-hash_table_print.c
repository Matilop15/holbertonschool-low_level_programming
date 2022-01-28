#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table.
 *
 *@ht: is the hash table
 *
 *Return: nothingg
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *srcnode;
	unsigned long int idx;
	int comenzo = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < (ht->size); idx++)
	{
		srcnode = ht->array[idx];
		while (srcnode != NULL)
		{
			if (comenzo > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", srcnode->key, srcnode->value);

			srcnode = srcnode->next;
			comenzo++;
		}
	}
	printf("}\n");
}
