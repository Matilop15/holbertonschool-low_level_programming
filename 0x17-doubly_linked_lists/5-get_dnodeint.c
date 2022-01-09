#include "lists.h"

/**
 * get_dnodeint_at_index - returns n node
 * @head: head of linked list
 * @index: index to find
 * Return: pointer to node buscado
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int cont = 0;

	if (head == NULL)
	return (NULL);

	ptr = head;

	while (ptr != NULL)
	{
		if (cont == index)
			return (ptr);

		ptr = ptr->next;
		cont++;
	}

	return (NULL);
}
