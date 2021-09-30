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
printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu byte(s)\n", sizeof(intype));
printf("Size of a long int: %lu byte(s)\n", sizeof(longinType));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
return (0);
}
