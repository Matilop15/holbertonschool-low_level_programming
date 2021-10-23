#include <stdio.h>
#include <stdlib.h>
/**
 *main - minimum number of coins to make chang
 *@argc: long of array
 *@argv: input number
 *Return: return 1 if not is only 1 number
 */
int main(int argc, char *argv[])
{
	int coin = 0;
	int a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; coin > 0; a++)
	{
		if (coin >= 25)
		{
			coin = coin - 25;
		}
		else if (coin >= 10)
		{
			coin = coin - 10;
		}
		else if (coin >= 5)
		{
			coin = coin - 5;
		}
		else if (coin >= 2)
		{
			coin = coin - 2;
		}
		else if (coin >= 1)
		{
			coin = coin - 1;
		}
	}
	printf("%d\n", a);
	return (0);
}
