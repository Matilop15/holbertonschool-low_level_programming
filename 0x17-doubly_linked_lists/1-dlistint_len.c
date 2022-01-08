#include "lists.h"
/**
 * dlistint_len - return number of elements
 * @h: head of a list
 * Return: the number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t cont = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		cont++;
		ptr = ptr->next;
	}

	return (cont);
}
