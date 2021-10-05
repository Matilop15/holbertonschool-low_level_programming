#include "main.h"
/**
* print_sign - dependiendo si es negativo o no
*@n: aleatory number
* Return: 1 and prints + if n is greater than zero, -1 and prints -
*/
int print_sign(int n)
{
	if (n > '0')
	{
	_putchar('+');
		return (1);
	}
		else (n == '0')
		{
			_putchar('0');
			return (0);
		}
			if (n < '0')
			{
				_putchar('-');
				return (-1);
			}
			return (2);
}
