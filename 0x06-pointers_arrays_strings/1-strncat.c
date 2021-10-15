#include "main.h"
/**
  *_strncat - copy n cantidad de characters
  *@dest: string finnally
  *@src: origin string
  *@n: cantidad de lugares a moverse
  *Return: devuelve string finally
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
		for (b = 0; (src[b] != 0 && b < n); b++)
		{
			dest[a] = src[b];
			a++;
		}
		return (dest);
}
