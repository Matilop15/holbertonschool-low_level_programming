#include "main.h"
/**
  *factorial - calculate factor of x number
  *@n: number for calculate factorial
  *Return: -1 if n<0, 1 if n=0, result of factorial n>0
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
