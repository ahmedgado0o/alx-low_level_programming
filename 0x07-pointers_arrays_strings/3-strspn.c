#include "main.h"
#include <stddef.h>
/**
 * _strspn - gets length
 * @s: char
 * @accept: char
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}

