#include "lists.h"
/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: header linked list
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	int a = 0;

	listint_t *temp = *head;
	*head = temp->next;
	a = temp->n;
	free(temp);
	return (a);
}
