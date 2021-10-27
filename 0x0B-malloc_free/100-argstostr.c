#include "main.h"
#include <stdlib.h>
/**
 *argstostr - function concatenat all arguments
 *@ac: numb of argument
 *@av: pointer to argument
 *Return: if ac or av is null, null.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 10;
	char *var;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		var = malloc(sizeof(char *) * a);
		if (var == NULL)
		{
			free(var);
			return (NULL);
		}
		for (b = 0; b < c; b++)
		{
			var[b] = av[a][b];
		}
	}
		return (var);
}
