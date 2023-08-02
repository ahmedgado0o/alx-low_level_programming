#include "main.h"
/**
 * _sqrt_recursion - returns square
 * @n: int in
 * Return: n or -1
 */
int _sqrt_recursion(int n)
{
	int guess;
	int improved_guess;

	guess = n / 2;
	improved_guess = (guess + n / guess) / 2;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (improved_guess == guess)
	{
		return (guess);
	}
	return (improved_guess);
}
