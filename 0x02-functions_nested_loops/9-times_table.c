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
				_putchar(resultado + '0');
			}
			if (resultado < 10 && columna != 0)
			{
				_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + resultado);
				}
					else if (resultado >= 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(resultado / 10 + '0');
						_putchar(resultado % 10 + '0');
					}
			}
	_putchar('\n');
	}
}
