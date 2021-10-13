#include "main.h"
/**
  **_scrcpy - copy string to the buffer
  *@dest: string tobe copied pointer
  *@src: pointer pointing destination
  *Return: print dest string
  */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
