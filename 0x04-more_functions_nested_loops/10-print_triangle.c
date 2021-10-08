#include "main.h"
/**
  *print_triangle - triangulo de  #
  *@size: tamaño del triangulo
  */

void print_triangle(int size)
{
	int i;
	int j;
	int k;


	if (size >= 1)
	{
		for (i = size ; i > 0 ; i--)
		{
			for (j = 0 ; j < (i - 1) ; j++)
			{
				_putchar(' ');
			}
			for (k = 0 ; k <= (size - i) ; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
