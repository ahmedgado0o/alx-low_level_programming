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
	while (n > 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	while (n < 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('9');
		_putchar('8');
		_putchar('\n');
}

