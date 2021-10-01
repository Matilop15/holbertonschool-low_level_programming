#include <stdio.h>
/**
* main - imprimir el abecedario
* Return: is 0!!!
*/
int main(void)
{
	char alf2;
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
	putchar (num);
	}
	for (alf2 = 'a' ; alf2 <= 'f' ; alf2++)
	{
	putchar (alf2);
	}
	{
	putchar ('\n');
	}
	return (0);
}
