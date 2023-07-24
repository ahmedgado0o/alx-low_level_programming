#include "main.h"
/**
 * puts_half - prints
 * @str: char in
 * Rturn:
 */
void puts_half(char *str)
{
	int length = 0;
	char *ptr = str;
	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}
	int st = (length - 1) / 2;

	if (length % 2 == 1)
		st++;
	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st++;
	}
	_putchar('\n');
}

