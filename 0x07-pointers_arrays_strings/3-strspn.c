#include "main.h"
/**
 *_strspn - calculate the length
 *@s: string base
 *@accept: compare bite
 *@Return: number of bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, j, k, l;
	unsigned int count;

	a = 0;
	l = 0;
	count = 0;

	while (accept[a] != '\0')
		i++;
	while (s[l] != '\0')
		l++;

	for (j = 0; j < l; j++)
	{
		for (k = 0; k <= a; k++)
		{
			if (accept[k] == s[j])
				count++;
		}
	}
	return (count);
}
