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
		b++;
	}
	if (b % 2 == 0)
	{
		for (a = (b / 2); str[a] != 0; a++)
		{
			_putchar(str[a]);
		}
	}
		else
		{
			for (a = (b / 2); str[a] != 0; a++)
			{
				_putchar(str[a]);
			}
		}
		_putchar('\n');
}
