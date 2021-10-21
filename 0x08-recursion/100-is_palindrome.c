#include "main.h"
/**
  *is_palindrome - busca palindromos
  *@s: string to compare
  *Return: 0 si no es palindromo y 1 si lo es
  */

int is_palindrome(char *s)
{
	int rec = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/**suma el valor de string a la variable a*/
		rec += _print_rev_recursion(s + 1);
		rec++;
		return (rec);
	}
}
