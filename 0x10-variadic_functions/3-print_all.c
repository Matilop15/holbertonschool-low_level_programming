#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_char - prints char
 *@param: arg to print
 */
void print_char(va_list param)
{
	printf("%c", va_arg(param, int));
}
/**
 *print_int - print integer
 *@param: arg to printt
 */
void print_int(va_list param)
{
	printf("%d", va_arg(param, int));
}
/**
 *print_float - prints a float
 *@param: arg to float
 */
void print_float(va_list param)
{
	printf("%f", va_arg(param, double));
}
/**
 *print_pchar - prints string
 *@param: string to print
 */
void print_pchar(va_list param)
{
	char *point = va_arg(param, char*);

	if (point == NULL)
	{
		printf("(nil)");
	}
	printf("%s", point);
}
/**
 *print_all - print anything
 *@format: list types of argument
 *Description: print anything
 */
void print_all(const char * const format, ...)
{
	va_list param;
	int a = 0;
	int b = 0;
	char *pooint = "";
	op_t type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_pchar},
		{'\0', NULL},
	};

	va_start(param, format);
	while (format && format[a])
	{
		b = 0;
		while (type[b].vari)
		{
			if (format[a] == type[b].vari)
			{
				printf("%s", pooint);
				type[b].f(param);
				pooint = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(param);
	printf("\n");
}
