#include "main.h"
/**
 * puts2 - prints
 * @str: char in
 * Return:
 */
void puts2(char *str)
{
	int in = 0;

	while (str[in] != '\0')
	{
		_putchar(str[in]);
		index += 2;
	}
	_putchar('\n');
}
