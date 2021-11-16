#include "lists.h"
/**
 *free_listint2 - librerar todo el espacio
 *@head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	while (*head)
	{
		if (*head == NULL)
			break;
		buffer = ((*head)->next);
		free(*head);
		*head = buffer;
	}
	*head = NULL;
}
