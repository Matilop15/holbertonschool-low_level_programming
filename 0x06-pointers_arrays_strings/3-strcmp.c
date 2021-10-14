#include "main.h"
/**
  *_strcmp - funcion que compara 2 strings
  *@s1: primer string
  *@s2: segundo string
  *Retunr: valor de la comparacion, si es 0 eran iguales, si es positivo el primero era mayor y visceversa.  
  */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	b = 0;

	for (a = 0; (s1[a] != '\0' && s2[a] != '\0'); a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
	}

	return (b);
}
