#include <stdio.h>
#include <stdlib.h>
/**
 *main - asdfghjhg
 *@argc: cantidad de arrays
 *@argv: arraaaaaaaay
 *Return: cerooo
*/
int main(int argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);
	*o = a + b;

	return (0);
}
