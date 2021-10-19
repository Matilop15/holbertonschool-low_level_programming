#include "main.h"
/**
 *_strspn - calculate the length
 *@s: string base
 *@accept: compare bite
 *@Return: number of bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for(a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (s[a] == 0)
			{
				return (a);
			}
		}
	}
	return (a);
}
