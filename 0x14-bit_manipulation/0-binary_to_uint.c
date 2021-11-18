#include "main.h"
/**
 *binary_to_uint - converted binary to unsigned int
 *
 *@b: pointer to binary number
 *
 *Return: 0 if the pointer= empty or string no contain only 0 or 1.
 *return unsigned number if all ok..
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0, base2 = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == '1')
		r = r + base2;

		base2 = base2 * 2;
	}
	return (r);
}
