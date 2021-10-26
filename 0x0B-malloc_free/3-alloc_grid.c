#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - puntero a puntero
 *@width: ancho del array 2d/size of column
 *@height: alto del array 2d/size of rows
 *Return: null if wodth or heiht is 0, else return array 2d
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **dest;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dest = malloc(sizeof(int *) * height);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		dest[a] = malloc((sizeof(int) * width));
		if (dest[a] == NULL)
		{
			for (a--; a >= 0; a--)
			{
				free(dest[a]);
			}
			free(dest);
			return (NULL);

		}
		for (b = 0; b < width; b++)
		{
			dest[a][b] = 0;
		}
	}
	return (dest);
}
