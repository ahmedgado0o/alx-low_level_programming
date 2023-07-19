#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints
 *
 * @n:int in
 *
 * Return:
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	else if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	else 
	{
		printf("98\n");
	}
}
