#include <stdio.h>
#include <stdlib.h>
/**
 *main - mult site 1 for 2 always
 *@argc: long of variable
 *@argv: content variabl
 *Return: if 1 if the variabl is more long of two, else is 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", c);
		return (0);
	}
}
