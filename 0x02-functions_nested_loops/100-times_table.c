#include "main.h"
/**
  *
  *
  */
void print_times_table(int n)
{
	int fila, columna, resultado;

	if (n <= 15 && n >= 0)
	{
		for (fila = 0 ; fila <= n ; fila++)
		{
			for (columna = 0 ; columna <= n ; columna++)
			{
				resultado = fila * columna;
				if (columna != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (fila == 0 && columna != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (resultado != 0 && resultado < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(resultado + '0');
				} else if (resultado >= 10 && resultado < 100)
				{
					_putchar(' ');
					_putchar((resultado / 10) + '0');
					_putchar((resultado % 10) + '0');
				}
				 else if (resultado >= 100 && resultado < 1000)
				{
					_putchar(((resultado / 100) % 10) + '0');
					_putchar(((resultado / 10) % 10) + '0');
					_putchar((resultado % 10) + '0');
				} else
				{
				_putchar(resultado + '0');
				}
			}
			_putchar('\n');
		}
	}
}
