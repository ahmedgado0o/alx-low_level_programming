#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creats array
 * @min: integer
 * @max: integer
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ar = (int *)malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}

