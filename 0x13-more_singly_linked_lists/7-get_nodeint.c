#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list.
 * @head: header of nodo
 * @index: position of get data
 * Return: data of nodo
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		a++;
	}
	return (head);
}
