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
	for (a = b; str[a]; a++)
		{
			_putchar(str[a]);
		}
	if (a / 2 != 0)
	{
		 b = (b + 1);
		 _putchar(str[a]);
	}
		_putchar('\n');
}
