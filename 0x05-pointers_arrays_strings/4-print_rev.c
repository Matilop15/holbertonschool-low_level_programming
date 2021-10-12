#include "main.h"
/**
  *print_rev - print text reverse
  *@s: puntero
  */
void print_rev(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
		;	
		
	for (a--; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
