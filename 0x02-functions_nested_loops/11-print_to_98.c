#include "main.h"
/**
 * print_to_98 - prints
 *
 * @n:int in
 *
 * Return:
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; (n = 89); n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (; (n = 89); n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n + '0');
	}
}

