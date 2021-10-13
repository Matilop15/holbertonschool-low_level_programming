#include "main.h"
/**
  *puts_half - la segunda mitad de str
  *@str: punterooo
  */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
		b = ((a + 1) / 2);
	for (; str[b]; b++)
	{
		_putchar(str[b]);
	}
		_putchar('\n');
}
