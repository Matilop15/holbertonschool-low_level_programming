#include "main.h"
/**
  *
  *
  */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		if ((*str % 2) == 0 || str == 0)
		{
			_putchar(*str);
		}
		if (*str == '\0')
		{
			break;
			str++;
		}
	}
	_putchar(10);
}
