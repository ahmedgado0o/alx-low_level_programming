#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates
 * @s: char in
 * @c: char
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == '\0')
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

