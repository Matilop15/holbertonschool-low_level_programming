#include "main.h"
/**
  *print_numbers - string 0-9
  *@a: varible
  *Return: is 0
  */
void print_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
