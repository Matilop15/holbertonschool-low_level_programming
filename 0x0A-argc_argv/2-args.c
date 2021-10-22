#include <stdio.h>
/**
 *main - print all words of the array follow to a new line
*@argc: number of words
*@argv: content array
 *Return: is 00 is all good
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
