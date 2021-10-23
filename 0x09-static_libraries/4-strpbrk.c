#include "main.h"
/**
  *_strpbrk - to find any stnrg
  *@s: string for check
  *@accept: string for compare
  *Return: pointer from string to find or null
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
