#include "main.h"
/**
 * print_rev - prints a string
 * @s: char in
 * Return:
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
