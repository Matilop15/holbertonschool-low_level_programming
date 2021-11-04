#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - print numberss
 *@separator: character separator the numbers
 *@n: cantidad de numberos
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	char *dest;

	va_start(param, n);
	for (a = 0; a < n; a++)
	{
		dest = va_arg(param, char *);
		if (dest == NULL)
			printf("(nil)");
		if (separator == NULL)
			printf("%s", dest);
		else
		{
			printf("%s", dest);
			if (n - 1 > a)
			printf("%s", separator);
		}
	}
	va_end(param);
	printf("\n");
}
