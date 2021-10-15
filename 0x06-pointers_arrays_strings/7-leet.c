#include "main.h"
/**
  *leet - letter for change
  *@a: text where serch letter
  *Return: text whit changes
  */
char *leet(char *a)
{
	int one, two;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (one = 0; a[one] != 0; one++)
	{
		for (two = 0; two < 10; two++)
		{
			if (a[one] == letter[two])
			{
				a[one] = num[two];
			}
		}
	}
	return (a);
}
