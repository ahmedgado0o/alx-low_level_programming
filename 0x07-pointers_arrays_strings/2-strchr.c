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
	while (*s != c && *s != '\0')
	{
		++s;
		if (*s == c)
			return(s);
		return(0);
	}
}

