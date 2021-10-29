#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocate memory using malloc and free
 *@ptr: pointer to memory previus allocated
 *@old_size: size of bytes od ptr
 *@new_size: size of bytes for the new memory
 *Return: new_size=old_size > ptr. new_size=0 >NULL. else Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newp = malloc(new_size);

		if (newp == NULL)
			return (NULL);

		return (newp);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	newp = malloc(new_size);

	if (newp == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
		newp[a] = ((char *) ptr)[a];

	free(ptr);
	return (newp);
}
