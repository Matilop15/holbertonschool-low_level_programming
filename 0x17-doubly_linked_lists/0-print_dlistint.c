#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements
 * @h: Head of a list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		cont++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (cont);
}
