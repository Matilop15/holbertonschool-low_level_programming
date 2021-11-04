#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers to array
 *@separator: character separtor
 *@n: number of characters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	int s;

	va_start(param, n);
	s = 0;
	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			s = va_arg(param, int);
			printf("%d", s);
			if (n - 1 > a && separator == NULL)
			printf("%s", separator);
		}
		va_end(param);
	}
	printf("\n");
}
