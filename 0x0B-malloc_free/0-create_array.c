#include "main.h"
#include <stdlib.h>
/**
 *create_array - array c
 *@size: of array c
 *@c: variable
 *Return: if c is 0, null. if c is a number, this number-
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));

	if (b == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; size > a; a++)
		{
			b[a] = c;
		}
	}
	return (b);
}
