#include "main.h"
/**
  *puts2 - lugares pares
  *@str - punteroo
  */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		
		if (*str == '\0')
		{
			break;
		}
	}
	_putchar(10);
}
