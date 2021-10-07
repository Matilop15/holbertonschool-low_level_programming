#include "main.h"
/**
 *print_square - write square of #
 *@size: ladoxlado
*/
void print_square(int size)
{
	int a, b;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
		for (a = 0; a < size; a++)
		{
			_putchar(35);

		for (b = 0; b < (size - 1); b++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
}
