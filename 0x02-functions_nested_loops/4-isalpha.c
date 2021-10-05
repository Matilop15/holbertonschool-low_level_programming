#include "main.h"
/**
* _isalpha - return 1 if c is lowercase or uppercase
*@c: number aleatorio
* Return: if is 1 lowercase or uppercase
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
