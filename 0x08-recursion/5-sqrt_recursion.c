#include "main.h"
/**
  *_squar - funcion auxiliar para raiz cuadrada
  *@n: numero para encontrar raiz cuadrada
  *@a: raiz...
  *Return: raiz cuadrada
  */
int _squar(int n, int a)
{
	int raiz = a * a;

	if (raiz > n)
	{
		return (-1);
	}
	if (raiz == n)
	{
		return (a);
	}
	return (_squar(n, a + 1));
}
/**
  *_sqrt_recursion - llamada a la funcion squar
  *@n: numero que me dan
  *Return: raiz cuadrada
  */
int _sqrt_recursion(int n)
{
	return (_squar(n, 0));
}
