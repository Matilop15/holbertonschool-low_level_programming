#include "main.h"
/**
  *print_times_table - print tabla grande
  *@n: variable calculad
  */
void print_times_table(int n)
{
	int fila, columna, resultado;

	if (n < 15 && n >= 0)
	{
		for (fila = 0 ; fila <= n ; fila++)
		{
			_putchar('0');
			for (columna = 1 ; columna <= n ; columna++)
			{
				resultado = fila * columna;
				if (resultado <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(resultado + '0');
				}
				else if (resultado < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(resultado / 10 + '0');
					_putchar(resultado % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((resultado / 10) / 10) + '0');
					_putchar(((resultado / 10) % 10) + '0');
					_putchar(resultado % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
