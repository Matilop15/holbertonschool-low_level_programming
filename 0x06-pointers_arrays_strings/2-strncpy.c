#include "main.h"
/**
  *_strncpy - copy n cantidad de caracteres
  *@dest: destino de la copia
  *@src: origen de donde copiar
  *@n: cantidad de caracteres
  *Return: envia la copia a main
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}
		return (dest);
}
