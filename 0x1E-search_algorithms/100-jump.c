#include "search_algos.h"
#include <math.h>
/**
 *jump_search - searches for a value in a sorted array of integers
 *using the Jump search algorithm
 *@array:  pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: is the value to search for
 *
 *Return: index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int pos = 0, jump = sqrt(size), sizee = size;
	int temp = 0;

	if (array == NULL)
		return (-1);

	while (pos < sizee)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos + jump - 1] >= value || pos + jump >= sizee)
			break;

		pos += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", pos,
		pos + jump);

	temp = pos;
	while (pos < temp + jump && pos < sizee)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		pos++;
	}

	return (-1);
}
