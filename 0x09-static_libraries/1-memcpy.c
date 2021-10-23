#include "main.h"
/**
  *_memcpy - copy from memory
  *@dest: destino de los datos
  *@src: code of memory
  *@n: cantidad de caracteres a copiar
  *Return: dest modificado
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a != n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
