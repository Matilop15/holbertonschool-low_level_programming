#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of linked list
 * @head: header of node
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
