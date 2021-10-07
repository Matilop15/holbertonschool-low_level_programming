#include "main.h"
/**
 * _isupper - scan lower o upercase
 *Return: if 1 c is uppercase
 *@c: variablee
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

