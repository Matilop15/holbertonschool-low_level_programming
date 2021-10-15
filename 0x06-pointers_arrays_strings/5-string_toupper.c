#include "main.h"
/**
  *string_toupper - changs letter to uppercase
  *@a: string where save
  *Return: ttext in uppercase
  */
char *string_toupper(char *a)
{
	int b, c;

	for (b = 0; a[b] != '\0'; b++)
	{
	}
	for (c = 0; c < b; c++)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
		{
			a[c] = a[c] - 32;
		}
	}
	return (a);
}
