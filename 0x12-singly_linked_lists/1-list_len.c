#include "lists.h"
/**
 *list_len - len of list
 *
 *@h: pounter to list_t
 *Return: no idea
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}


