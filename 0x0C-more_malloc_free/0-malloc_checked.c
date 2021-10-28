#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - checking so goof
 *@b: array
 *Return: if malloc fails, return 98. return alloatess memory
 */
void *malloc_checked(unsigned int b)
{
	void *dest;

	if (b == 0)
	{
		exit(98);
	}
	dest = malloc(b);

	if (dest == NULL)
	{
		exit(98);
	}
	return (dest);
	free(dest);
}
