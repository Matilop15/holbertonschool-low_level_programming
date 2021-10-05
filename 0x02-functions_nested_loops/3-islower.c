#include "main.h"
/**
* _islower - scan lowercase
*
*@c: number aleatorio
* Return: if is 0 'c' is uppercase, if is 1 'c' is lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
