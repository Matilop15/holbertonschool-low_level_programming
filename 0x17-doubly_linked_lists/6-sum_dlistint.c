#include "lists.h"

/**
 * sum_dlistint - returns sum of the contents of the nodes
 * @head: head of linked list
 * Return: Sum of the values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int suma = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		suma += ptr->n;
		ptr = ptr->next;
	}

	return (suma);
}
