#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - Helper function
 * @s: The string to check.
 * @start: The starting index for the comparison.
 * @end: The ending index for the comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 * An empty string is considered a palindrome.
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len == 0)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, len - 1));
}

