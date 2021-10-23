#include "main.h"
/**
  *_memset - copy and paste string in x site
  *@s: puntero a modificar
  *@b: string a copiar
  *@n: cantidad de caracteres a copiar
  *Return: string modifiqada
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a != n; a++)
	{
		s[a] = b;
	}
	return (s);
}
