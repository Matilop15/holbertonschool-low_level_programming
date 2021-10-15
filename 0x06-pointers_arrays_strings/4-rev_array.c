#include "main.h"
/**
  *reverse_array - muestra un array al reves
  *@a: array
  *@n: largo del array
  */
void reverse_array(int *a, int n)
{
	int c, b;
	int temp;

	c = (n - 1);
	for (b = 0; b < c; b++)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		c--;
	}
}
