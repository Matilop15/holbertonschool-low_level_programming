#include "lists.h"
/**
 *add_node_end - agrega nodos al final - 
 *@head: puntero al puntero que apunta a head
 *@str: string a poner en new_list
 *Return: new_list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	new_list = malloc(sizeof(list_t));
	tmp = malloc(sizeof(list_t));
	if (!tmp || !new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = length;
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
