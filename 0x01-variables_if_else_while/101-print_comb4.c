#include <stdio.h>
/**
 * main - prints
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			for (k = i + 2; k < 10; ++k)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
