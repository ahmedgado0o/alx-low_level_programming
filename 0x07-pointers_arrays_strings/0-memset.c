#include <stddef.h>
/**
 * *_memset - fills memory
 * @i: unsigned int
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

