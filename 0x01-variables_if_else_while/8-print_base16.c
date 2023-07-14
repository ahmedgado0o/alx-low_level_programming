#include <stdio.h>
/**
 * main - prints
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; ++i)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
