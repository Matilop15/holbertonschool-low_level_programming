#include "lists.h"
/**
 *add_node - agraga nodos
 *@head: comienzo de las listas enlazadas
 *@str: contenido de las listas
 *Return: new linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int length = 0;

	while (str[length]) /*mide cada list*/
		length++;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str); /*duplica str y lo pega*/
	new_list->len = length;     /*da el valor de largo*/
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
