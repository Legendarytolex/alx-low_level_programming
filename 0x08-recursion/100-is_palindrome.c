#include "main.h"

/**
 * _strlen_recursion - helper function
 * @s: a string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_recursive - a helper function
 * @s: a string
 * @start: an integer
 * @end: an integer
 * Return: output
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome and 0
 * @s: the string to be checked
 * Return: the outcome
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
