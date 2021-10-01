#include <stdio.h>
/**
* main - imprimir el abecedario
* Return: is 0!!!
*/
int main(void)
{
	char alf, alf2;
	
	for (alf = 'a' ; alf <= 'z' ; alf++)
	putchar (alf);

	for (alf2 = 'A' ; alf2 <= 'Z' ; alf2++)
	putchar (alf2);
	putchar ('\n');
	return (0);
}
