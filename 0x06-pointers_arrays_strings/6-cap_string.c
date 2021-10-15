#include "main.h"
/**
  *cap_string - cambiar las minusculas desp de un simbolo
  *@a: texto a modificar
  *Return: txto dado
  */
char *cap_string(char *a)
{
	int b, d;
	int c[] = {'.', ',', '(', ')',
		'{', '}', '!', '?', '"', 10, '-', 9, ' '};

	for (b = 0; a[b] != 0; b++)
	{
		if (a[0] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}

		for (d = 0; c[d] != 0; d++)
		{

		if (a[b] == c[d])
		{
			if (a[b + 1] >= 97 && a[b + 1] <= 122)
			{
				a[b + 1] = a[b + 1] - 32;
			}
		}
		}
	}
	return (a);
}
