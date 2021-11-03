#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - return the firs element if have matche
 *@array: content number for compare values
 *@size: size of array
 *@cmp: pointer to pointer
 *Return: -1 if size is <= 0 or 0 if no matches
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
