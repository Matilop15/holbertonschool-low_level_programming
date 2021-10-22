#include <stdio.h>
#include <stdlib.h>
/**
 *main - mult site 1 for 2 always
 *@argc: long of variable
 *@argv: content variabl
 *Return: if 1 if the variabl not is two, else is 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = b * a;
		printf("%d\n", c);
	}
	return (0);
}
