#include "main.h"
#include <stdio.h>
/**
 * main - print
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
