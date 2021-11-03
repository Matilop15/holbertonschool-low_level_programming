#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print name of
 *@name: text to print
 *@f: pointer to fuctionc char
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
