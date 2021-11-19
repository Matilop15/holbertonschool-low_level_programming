#include "main.h"
/**
 *set_bit - given index to 1
 *@n: pointer to bit
 *@index: place where change for 1
 *Return: if error -1.. else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
