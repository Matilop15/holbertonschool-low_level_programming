#include "main.h"
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, cont;
	
	cont = 0;

	for(a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				cont++;
			}
		}
		if (b == a)
		{
			break;
		}
	}
	return (cont);
}
