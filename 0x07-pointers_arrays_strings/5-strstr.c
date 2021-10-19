#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: string where to find
  *@needle: string for find
  *Return: addres of substring
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	if (needle[0] == '\0')
	{
		return (0);
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			c = a;
			for (b = 0; needle[b] == haystack[c]; b++)
			{
				if (needle[b + 1] == '\0')
				{
					return (&haystack[a]);
				}
				c++;
			}
		}
	}
	return (0);
}
