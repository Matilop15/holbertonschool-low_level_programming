#include "main.h"
/**
  *_strlen_recursion - to find long of string
  *@s: long of string
  *Return: value of long string
  */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/**suma el valor de string a a*/
		a++;
		a += _strlen_recursion(s + 1);
		return (a);
	}
}
