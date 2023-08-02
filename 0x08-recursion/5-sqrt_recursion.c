#include "main.h"
/**
 * _sqrt_recursion_helper - Helper function to find
 * @n: The number to find the square root for.
 * @start: The starting value for the binary search range.
 * @end: The ending value for the binary search range.
 *
 * Return: The square root of n, or -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number to find the square root for.
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 1, n));
}
