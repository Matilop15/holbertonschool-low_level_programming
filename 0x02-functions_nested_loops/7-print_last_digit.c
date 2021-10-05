#include "main.h"
/**
  *print_last_digit - print last digit
  *
  *@mat: varibale
  *Return: retorna la variable
  */
int print_last_digit(int mat)
{
	int res = mat % 10;

	if (res < 0)
	{
		_putchar(res * -1);
	}
	else
		{
		return (res);
		}
	return (0);
}
