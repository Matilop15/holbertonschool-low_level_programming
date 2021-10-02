#include <stdio.h>
/**
* main - numeros de a tres
* Return: is 0
 */
int main(void)
{
	int alf;
	int seg;
	int ter;

	for (alf = '0' ; alf <= '9' ; alf++)
	{
	for (seg = '0' ; seg <= '9' ; seg++)
	{
		for (ter = '0' ; ter <= '9' ; ter++)
		{
			if (alf < seg && seg != ter)
			{
				putchar(alf);
				putchar(seg);
				putchar(ter);
					if (alf != '7' || seg != '8' || ter != '9')
					{
						putchar(44);
						putchar(32);
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
