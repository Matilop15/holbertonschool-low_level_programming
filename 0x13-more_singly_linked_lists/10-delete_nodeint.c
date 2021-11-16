#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at index X
 *@head: puntero del puntero
 *@index: node that should be deleted
 *Return: -1 if not delete. 1 if delete node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *buffer = *head, *aux = *head;
	unsigned int a = 1;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	if (index > 0)
	{
		while (buffer)
		{
			if (a == index)
			{
				aux = buffer->next;
				buffer->next = aux->next;
				free(aux);
				return (1);
			}
		buffer = buffer->next;
		a++;
		}

	}
	return (-1);
}
