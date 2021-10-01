#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Si n=0 imprimira "is zero".
*si n=+0 mostrara "is positive".
*Return: si n=-0 mostrara "is negative".
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%d is zero\n", n);
}
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	if (n < 0)
{
	printf("%d is negative\n", n);
}
	return (0);
}
