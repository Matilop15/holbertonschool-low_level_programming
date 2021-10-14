#include "main.h"
/**
*rev_string - reverse of string
*@s: string
*/
void rev_string(char *s)
{
	int a, b, c;
	char temp;

	a = 0;
	c = 0;
	while (s[a] != '\0')
	{
		c++;
		a++;
	}

	a = (c - 1);
	for (b = 0; b < a; b++)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
		a--;
	}
}
