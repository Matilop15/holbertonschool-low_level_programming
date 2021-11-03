#include <stdlib.h>
#include "3-calc.h"
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
