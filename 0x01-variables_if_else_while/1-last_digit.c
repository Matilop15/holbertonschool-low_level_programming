#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - toma el ultimo numero y lo compara
*
* Return: si N-0 mostrara "is negative"
*/
int main(void)
{	int mod = n % 10;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	else if (mod == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, mod);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);

	}
	return (0);
}
