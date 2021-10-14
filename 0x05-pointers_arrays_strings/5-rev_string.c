#include "main.h"
#include <stdio.h>
/**
  *rev_string - reverse of string
  *@s: string
  */
void rev_string(char *s)
{
	int tam, last;
	char buf;

	for (tam = 0; s[tam] != 0; tam++)
	{
	}
	tam = tam - 1;
	for (last = tam; last >= 0; last--)
	{
		if (last == tam / 2)
		{
			break;
		}
		else
		{
		buf = *(s + (tam - last));
		*(s + (tam - last)) = *(s + last);
		*(s + last) = buf;
		}
	}
}
