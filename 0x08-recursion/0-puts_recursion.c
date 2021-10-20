#include "main.h"
/**
  *_puts_recursion - function to use for print this string
  *@s: string for print
  */
void _puts_recursion(char *s)
{
	int cont;

	for (cont = 0; s[cont] != 0; cont++)
	{
		_putchar(s[cont]);
	}
	_putchar(10);
}
