#include <stdio.h>
#include <stdlib.h>
/**
 *main - add only positive numbers
 *@argc: long of array
 *@argv: content array
 *Return: return 1 if not is a number
 */
int main(int argc, char *argv[])
{
	int a, num, suma = 0;

	for (a = 1; argc > a; a++)
	{
		for (num = 0; argv[a][num] != 0; num++)
		{
			if (argv[a][num] >= 48 && argv[a][num] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	suma += atoi(argv[a]);
	}
	printf("%d\n", suma);
	return (0);
}
