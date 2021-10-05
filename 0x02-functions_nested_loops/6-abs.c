#include "main.h"
/**
*_abs - absolute numbers
*@mat: variable
*Return: 0 esta todo bine
*/
int _abs(int mat)
{
	if (mat < 0)
	{
	return (mat * -1);
	}
		if (mat > 0)
		{
			return (mat);
		}
		return (0);
}
