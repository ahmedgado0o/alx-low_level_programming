#include "main.h"
/**
 * _islower - checks for lawercase character
 *
 * Return: 1 if c is low else 0
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
