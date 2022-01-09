#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *next_node;

	if (head == NULL)
		return;

	ptr = head;
	next_node = ptr->next;

	while (next_node != NULL)
	{
		free(ptr);
		ptr = next_node;
		next_node = next_node->next;
	}

	free(ptr);
}
