#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always
 */
int main(void)
{
	int intype;
	float floatType;
	char charType;
	long int longinType;
	long long int longlongType;
printf("Size of a char: %lu bytes\n", sizeof(charType));
printf("Size of an int: %lu bytes\n", sizeof(intype));
printf("Size of a long int: %lu bytes\n", sizeof(longinType));
printf("Size of a long long int: %lu bytes\n", sizeof(longlongType));
prinft("Size of a float: %lu bytes\n", sizeof(floatType));
return (0);
}
