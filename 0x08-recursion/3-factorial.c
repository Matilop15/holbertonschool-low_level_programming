#include "main.h"
/**
  *factorial - calculate factor of x number
  *@n: number for calculate factorial
  *Return: -1 if n<0, 1 if n=0, result of factorial n>0
  */
int factorial(int n)
{
	int res = 1, a = 1;

	if (n < 0)
		return (-1);
	if (n == '0')
		return (1);

		else
			while (a <= n)
			{
				res = res * a;
				a++;
			}
		return (res);
}

