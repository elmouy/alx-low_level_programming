#include "main.h"

int _check(char *s, int i, int n);
int _recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check(s, 0, _recursion(s)));
}

/**
 * _recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _recursion(s + 1));
}

/**
 * _check - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @n: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _check(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (_check(s, i + 1, n - 1));
}
