#include "main.h"
/**
  *_puts_recursion - function to use for print this string
  *@s: string for print
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		 _putchar(*s);
		_puts_recursion(s + 1);
	}
}
