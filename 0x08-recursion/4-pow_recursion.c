#include "main.h"
/**
 * _pow_recursion - returns x to power y
 * @x: int in
 * @y: int in
 * Return: x^y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
