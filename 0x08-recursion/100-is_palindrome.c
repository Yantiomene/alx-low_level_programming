#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrom_check - compares start and end character of the string recursively
 * @s: string
 * @start: started character
 * @end: ended character
 *
 * Return: 1 if palindrom and 0 otherwise
 */
int palindrom_check(char *s, int start, int end)
{
	if (s[start] == s[end])
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + palindrom_check(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrom_check(s, 0, _strlen_recursion(s) - 1));
}
