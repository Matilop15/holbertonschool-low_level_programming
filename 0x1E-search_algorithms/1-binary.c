#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted array
 *of integers using the Binary search algorithm
 *@array:  pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: is the value to search for
 *
 *Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int sizee = size - 1, min = 0, med, temp;

	if (array == NULL)
		return (-1);

	while (sizee >= min)
	{
		temp = min;
		printf("Search in array: ");
		while (temp <= sizee)
		{
			printf("%d", array[temp]);
			if (temp != sizee)
				printf(", ");
			temp++;
		}
		printf("\n");
		med = (sizee + min) / 2;

		if (array[med] == value)
			return (med);
		if (array[med] < value)
			min = med + 1;
		else
			sizee = med - 1;
	}
	return (-1);
}
