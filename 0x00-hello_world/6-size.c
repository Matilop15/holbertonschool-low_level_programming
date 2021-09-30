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
	double  doubleType;
	char charType;
	long int longinType;
	long long int longlongType;
printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intype));
printf("Size of a long int: %zu bytes\n", sizeof(longinType));
printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
pronft("Size of a float: %zu bytes\n", sizeof(floatType));
}
