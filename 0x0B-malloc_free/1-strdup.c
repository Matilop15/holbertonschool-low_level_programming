#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copia el largo de una cadena
 *@str: string to copy
 *Return: if size str es 0, NULL. if size of copy str is 0, NULL
 */
char *_strdup(char *str)
{
	char *dest;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	dest = malloc((a * sizeof(str)) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = str[b];
	}
	return (dest);
}
