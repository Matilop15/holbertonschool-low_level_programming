#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the index node
 * @head: pointer to linked list.
 * @index: The index of the node for delete
 * Return: (1) if ok or (-1) if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int cont;

	tmp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	else
	{
		for (cont = 0; cont < index; cont++)
		{
			if (!tmp)
				return (-1);
			tmp = tmp->next;
		}

		if (!tmp)
			return (-1);

		if (!tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
