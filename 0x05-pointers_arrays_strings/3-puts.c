#include "main.h"
/**
 * _puts - prints a string
 * @str: char in 
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
