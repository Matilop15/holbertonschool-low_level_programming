#include "main.h"
/**
* _abs - absolute numbers
*@mat: variable
*Return: 0 esta todo bine
*/

int _abs(int mat)
{
	if (mat < 0)
	{
		_putchar(mat * -1);
	}
		if (mat > 0)
		{
			_putchar(mat);
		}
		return (0);
}


