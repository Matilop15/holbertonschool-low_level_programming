#include "main.h"
/**
  *
  *
  */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	b = 0;

	for (a = 0; (s1[a] != '\0' && s2[a] != '\0'); a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
	}

	return (b);
}
