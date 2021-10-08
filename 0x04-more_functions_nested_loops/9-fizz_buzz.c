#include <stdio.h>
/**
  *main - print num 1-100 and fizzbuzz in multipl of 15
 *Return: if 0 all ok
 */
int main(void)
{
	char num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num <= 99)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
