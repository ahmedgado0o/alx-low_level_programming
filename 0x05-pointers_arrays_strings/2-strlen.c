#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: char in
 * Return: s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
