#include "main.h"
/**
*_strspn -  gets length of prefix substring
*@s: string for check
*@accept: bytes for check
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
