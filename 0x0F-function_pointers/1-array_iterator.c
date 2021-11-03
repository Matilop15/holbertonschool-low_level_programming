#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - name of fuction---
 *@size: size of array
 *@action: pointer to fuction
 *@array: conten text to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != 0 && size > 0 && action != 0)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
