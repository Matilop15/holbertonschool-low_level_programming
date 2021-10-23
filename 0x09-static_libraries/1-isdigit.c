#include "main.h"
/**
  * _isdigit - funcion para encontrar numeros
  *@c: variable
 *Return: if is 1 c is a number
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
