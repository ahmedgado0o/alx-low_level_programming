#include <stdio.h>
/**
 * main - prints
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 10; i < 100 ; ++i)
	{
		for (j = 10; j < 100; ++j)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if ( i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
