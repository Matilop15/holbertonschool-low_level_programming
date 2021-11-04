#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - funcions de suma de valores
 *@n: cantidad de charateres a sumar
 *Return: la suma de todo
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	int suma;

	va_start(param, n);
	suma = 0;
	for (a = 0; a < n; a++)
	{
		suma += va_arg(param, int);
	}
	va_end(param);
	return (suma);
}
