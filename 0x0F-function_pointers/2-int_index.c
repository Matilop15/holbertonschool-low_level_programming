#include <stdio.h>
#include "function_pointers.h"
/**
 *
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array != 0 && cmp != 0)
	{
		for (a = 0; size > a; a++)
		{
			if (cmp(array[a]))
			return (a);
		}
	}
	return (-1);
}
