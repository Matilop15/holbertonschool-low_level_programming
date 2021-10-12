#include "main.h"
/**
  *swap_int - cambio de valores entre a y b
  *@a: puntero a
  *@b: puntero b
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = *a;
}
