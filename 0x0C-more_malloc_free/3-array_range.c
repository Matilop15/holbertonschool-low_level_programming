#include "main.h"
#include <stdlib.h>
/**
 *array_range - crete array of integer orders
 *@min: first value of array
 *@max: las value of array
 *Return: if min > max NULL. else new pointer crated
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
