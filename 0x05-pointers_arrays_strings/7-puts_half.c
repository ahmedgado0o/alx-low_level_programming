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
	int start_index = (length - 1) / 2;
	if (length % 2 == 1)
		start_index++;
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}

