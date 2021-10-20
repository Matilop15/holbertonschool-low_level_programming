#include "main.h"
/**
  *primo - busca numeros primos
  *@n: valor a buscar si es primo
  *@x: valor que aumenta
  *Return: if 1, es primo, si es 0, no es primo.
  */
int primo(int n, int x)
{
	if (n < 0)
		return (0);

	if (x == n)
	{
		return (1);
	}
	else
	{
		if (n % x == 0)
		{
			return (1 + primo(n, x + 1));
		}
		else
		{
			return (0 + primo(n, x + 1));
		}
	}
}
/**
  *is_prime_number - muestra si es primo
  *@n: valor que nos dan
  *Return: if 1, es primo, if 0 no es primo
  */
int is_prime_number(int n)
{
	int x = 1, d;

	d = primo(n, x);

	if (d == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
