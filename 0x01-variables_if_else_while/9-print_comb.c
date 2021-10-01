#include <stdio.h>
/**
*main - imprimir el abecedario
* Return: is 0!!!
*/
int main(void)
{
	int alf;

	for (alf = '0' ; alf <= '9' ; alf++)
	{
		putchar(alf);
		if (alf < '9')
		{
			putchar (44);
			putchar (32);
		}

	}
	putchar('\n');
	return (0);
}
