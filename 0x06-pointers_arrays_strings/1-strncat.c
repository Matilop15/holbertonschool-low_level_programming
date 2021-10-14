#include "main.h"
/**
  *
  *
  *
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
