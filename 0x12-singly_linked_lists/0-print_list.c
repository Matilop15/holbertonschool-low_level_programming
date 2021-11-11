#include "lists.h"
/**
 *print_list - print number of elements in list_t
 *
 *@h: pointer to list
 *Return: size of linked list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
