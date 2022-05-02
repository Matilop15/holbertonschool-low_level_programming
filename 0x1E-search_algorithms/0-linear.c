#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 *@array: Pointer to the first element of the array
 *@size: Number of elements in array
 *@value: to search for
 *Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0, sizee = size;

	if (array == NULL)
		return (-1);

	for (; i < sizee; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
