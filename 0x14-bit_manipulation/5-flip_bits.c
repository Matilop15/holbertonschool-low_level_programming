#include "main.h"
/**
 *flip_bits - number of bits fliped for num to num
 *@n: first num
 *@m: second num
 *Return: numbero of bits needed to exactly flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new = 0, cont = 0;

	new = n ^ m;
	while (new)
	{
		if (new & 1)
			cont++;

		new >>= 1;
	}

	return (cont);
}
