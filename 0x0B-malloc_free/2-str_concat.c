#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concate two string
 *@s1: string 1
 *@s2: string 2
 *Return: cadenas unidas
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int a, b, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	d = a + b;
	dest = malloc((d * sizeof(char)) + 1);

	for (c = 0; c < a; c++)
	{
		dest[c] = s1[c];
	}
	a = 0;
	for (; c < d; c++)
	{
		dest[c] = s2[a];
		a++;
	}
	dest[c] = '\0';
	return (dest);

}
