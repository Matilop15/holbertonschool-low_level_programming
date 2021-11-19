#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = "99";

	if (*endian == num)
		return (1);

	return (0);
}
