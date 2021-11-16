#include "lists.h"
/**
 *reverse_listint - dar vuelta los nodos
 *@head: puntero del punteroo
 *Return: nodos en sentido contrario
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *desp = NULL;

	if (head)
	{
		while (*head)
		{
			desp = *head;
			*head = (*head)->next;
			desp->next = prev;
			prev = desp;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
