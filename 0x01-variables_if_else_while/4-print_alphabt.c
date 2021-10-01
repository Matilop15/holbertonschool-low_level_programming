#include <stdio.h>
/**
*main - imprimir el abecedario
* Return: is 0!!!
*/
int main(void)
{
	char alf;

	for (alf = 'a' ; alf <= 'z' ; alf++)
		if (alf != 'e' && alf != 'q')
	{
		putchar (alf);
	}
	putchar ('\n');
	return (0);
}
