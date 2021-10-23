#include "main.h"
/**
  *_puts - string of characters
  *@str: idem
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
