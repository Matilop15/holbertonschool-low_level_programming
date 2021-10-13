#include "main.h"
/**
  *puts_half - la segunda mitad de str
  *@str: punterooo
  */
void puts_half(char *str)
{
	int a, b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{	
	}
	b = (a / 2);
	b = (b + 1);
	for (a = b; str[a]; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
}
