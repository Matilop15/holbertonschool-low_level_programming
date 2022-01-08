#include "lists.h"

/**
 *  add_dnodeint - adds a new node at the beginning
 *  @head: head of the node
 *  @n: value to new node
 *  Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		node = *head;
		node->prev = new_node;
		new_node->next = node;
		*head = new_node;
		return (new_node);
	}
}
