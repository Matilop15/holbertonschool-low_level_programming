#include <stdio.h>
/**
* main - numeros de a dos
* Return: is 0
 */
int main(void)
{
	int alf;
	int seg;

	for (alf = '0' ; alf <= '9' ; alf++)
	{
		for (seg = '0' ; seg <= '9' ; seg++)
		{
			if (alf < seg && alf !=  seg)
			{
				putchar(alf);
				putchar(seg);
				if (alf != '8' || seg != '9')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
