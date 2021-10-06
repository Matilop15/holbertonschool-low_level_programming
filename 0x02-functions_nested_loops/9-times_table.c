#include "main.h"
/**
*times_table - tabla sumatoria
 */
void times_table(void)
{
	int fila, columna, resultado;

	for (fila = 0 ; fila <= 9 ; fila++)
	{
		for (columna = 0 ; columna <= 9 ; columna++)
		{
			resultado = fila * columna;
			if (columna == 0)
			{
				_putchar(resultado);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
				if (resultado / 10 == 0)
					{
					_putchar(' ');
					_putchar('0' + resultado);
					}
				else
				{
					_putchar('0' + resultado / 10);
					_putchar('0' + resultado % 10);
				}
		}
	_putchar('\n');
	}
}
