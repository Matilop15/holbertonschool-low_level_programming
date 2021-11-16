#include "lists.h"
/**
 *insert_nodeint_at_index - new node at a given position
 *@head: puntero al puntero
 *@idx: position to new node
 *@n: content of the new node
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int a = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	while (a < (idx - 1))
	{
		temp = temp->next;
		a++;
	}

	if (temp == NULL)
	{
		newnode->next = NULL;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
