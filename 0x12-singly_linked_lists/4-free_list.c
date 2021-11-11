#include "lists.h"
/**
 *free_list - librerar todo el espacio
 *@head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
