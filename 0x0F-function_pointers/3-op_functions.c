#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - sum a and b
 *@a: number a
 *@b: numb b
 *Return: return a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - difference bettwen a and b
 *@a: numb a
 *@b: numb b
 *Return: product of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *@a: numb a
 *@b: numb b
 *Return: product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division
 *@a: numb a
 *@b: numb b
 *Return: division a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 *op_mod - modulo for a % b
 *@a: numb a
 *@b: numb b
 *Return: remainer of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
