#include "main.h"
/**
  *_strlen - cantidad de caracteres
  *@s: hola
  *Return: cantidad de caracteresss
  */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
