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
	unsigned int a = 1;

	if (head)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		if (idx > 0)
		{
			temp = *head;
			while (temp)
			{
				if (a == idx)
				{
					newnode->next = temp->next;
					temp->next = newnode;
					return (newnode);
				}
			temp = temp->next;
			a++;
			}
			if (idx > a)
				return (NULL);
		}
		else
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
