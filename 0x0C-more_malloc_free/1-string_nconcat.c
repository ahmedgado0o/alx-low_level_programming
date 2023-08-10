#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: char in
 * @s2: char also
 * @n: unsigned integer
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_s1;
	unsigned int l_s2;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l_s1 = strlen(s1);
	l_s2 = strlen(s2);
	if (n >= l_s2)
	{
		n = l_s2;
	}
	r = (char *)malloc(l_s1 + n + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	strncpy(r, s1, l_s1);
	strncpy(r + l_s1, s2, n);
	r[l_s1 + n] = '\0';
	return (r);
}
