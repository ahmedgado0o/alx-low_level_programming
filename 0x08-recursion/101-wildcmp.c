#include "main.h"
/**
 * wildcmp - Compare two strings
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings are identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == *(s2 + 1)))
	{
		if (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
