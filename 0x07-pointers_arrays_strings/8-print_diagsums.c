#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - sums the diagonals and print result
  *@a: pointer where are matrix the numbers
  *@size: size of matrix
  */
void print_diagsums(int *a, int size)
{
	int b;
	int sum1 = 0, sum2 = 0;

	for (b = 0; size > b; b++)
	{
		sum1 += a[(size * b) + b];
		sum2 += a[(size - 1) * (b + 1)];
	}
		printf("%d, %d\n", sum1, sum2);
}
