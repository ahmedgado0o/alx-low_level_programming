#include "main.h"
/**
 * swap_int - swap ints
 * @a: intfirst
 * @b: int sec
 * Return: a ,b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
