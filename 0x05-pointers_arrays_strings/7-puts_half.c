#include "main.h"
/**
  *puts_half - la segunda mitad de str
  *@str: punterooo
  */
void puts_half(char *str)
{
	int a, b = 0;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for (b = 0; str[b] != 0; b++)
	{
		if ((b >= (a / 2)) || (b == (a / 2) - 1))
		{
			_putchar(str[b]);
		}

	}
		_putchar('\n');
}
