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
		while (n != 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n < 98)
	{
		while (n != 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}

