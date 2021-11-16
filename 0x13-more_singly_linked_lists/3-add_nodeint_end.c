#include "lists.h"
/**
 *add_nodeint_end - add node in the end
 *@head: puntero al puntero de head
 *@n: contendio de del nodo
 *Return: address of a newnodo
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *tmp = *head;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_list;

	return (new_list);
}
