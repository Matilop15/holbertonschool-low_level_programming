#include "main.h"
#include <stdlib.h>
/**
 *_calloc - Allocates memory for an array
 *@nmemb: number of elements
 *@size: bytes of size
 *Return: if nmemb = 0 or size = 0 NULL, else return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *dest;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = nmemb * size;
	dest = malloc(a);

	if (dest == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		dest[b] = 0;

	return (dest);
}

