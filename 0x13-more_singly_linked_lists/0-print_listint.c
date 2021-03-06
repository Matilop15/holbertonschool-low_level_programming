#include "lists.h"
/**
 *print_listint - print number of elements in listint_t
 *
 *@h: pointer to list
 *Return: size of linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
