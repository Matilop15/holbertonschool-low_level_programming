#include "main.h"
/**
  *puts_half - la segunda mitad de str
  *@str: punterooo
  */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{	
	}
	a = (a - 1) / 2;
	for (; str[a]; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
}
