#include "main.h"
/**
 * _islower - checks for lawercase character
 *
 * @c: is the int input
 *
 * Return: if c lowercase 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
