#include "main.h"
/**
 * _isalpha - checks for alphabetic
 *
 * @c: int input
 *
 * Return: 1 if c is letter else 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
