#include "search_algos.h"

/**
 * interpolation_search - Searches a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: index where value is located or -1 
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lo = 0, hi = size - 1;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) /
					(array[hi] - array[lo])) * (value - array[lo]));

		printf("Value checked array[%lu] ", pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			return (-1);
		}

		printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			lo = pos + 1;
		else
			hi = pos - 1;
	}

	return (-1);
}
