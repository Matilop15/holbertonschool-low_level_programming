#include "main.h"
/**
* print_alphabet_x10 - write 10 times the alphabet
* Return: es 0
*/
void print_alphabet_x10(void)
{
	int num, alf;

	for (num = '0' ; num <= '9' ; num++)
	{
		for (alf = 'a' ; alf <= 'z' ; alf++)
		{
			_putchar(alf);
		}
	_putchar('\n');
	}
}
