#include "main.h"
/**
  *_pow_recursion - eleva x^y
  *@x: numero base
  *@y: elevador
  *Return: if y=1 retun x(numbase), if y<0 return -1, if y>1 retnr x^y
  */
int _pow_recursion(int x, int y)
{
	/**caso base*/
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
}
