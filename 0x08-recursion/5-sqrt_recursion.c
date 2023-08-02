#include "main.h"
/**
 * _sqrt_recursion - returns square
 * @n: int in
 * Return: n or -1
 */
int _sqrt_recursion(int n)
{
	int g;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	g = _sqrt_recursion(n / 4);
	if (g * g > n)
	{
		return (g - 1);
	}
	else
	{
		return (g);
	}
}
