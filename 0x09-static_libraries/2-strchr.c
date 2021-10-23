#include "main.h"
/**
  *_strchr - locate a character in a string
  *@s: string where to find character
  *@c: character to find
  *@: to move in the string
  *Return: if to find the character its address, else is null
  */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= 0; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
		return (0);
}
