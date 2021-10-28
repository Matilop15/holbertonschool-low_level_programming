#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenar two array
 *@s1: array 1
 *@s2: array 2
 *@n: largo de s2
 *Return: las uniones de s1 y s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *dest1;
	unsigned int a, b, c, d;
	/**cadena vacia si pasan null*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/**contando el largo de las cadenas*/
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	/**compara el largo de b con n para ver cual usa en caso de que n > b*/
	if (n >= b)
	{
		d = a + b;
	}
	else
		d = a + n;

	dest1 = malloc((d * sizeof(char)) + 1);
	/**pidiendo lugar para las dos cadenas*/
	if (dest1 == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		dest1[c] = s1[c];
	}
	a = 0;
	for (; c < d; c++)
	{
		dest1[c] = s2[a];
		a++;
	}
	dest1[c] = '\0';
	return (dest1);
}
