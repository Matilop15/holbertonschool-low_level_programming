#include "lists.h"
/**
 *listint_len - cantidad de nodos en la linked list
 *@h: head
 *Return: the size of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
