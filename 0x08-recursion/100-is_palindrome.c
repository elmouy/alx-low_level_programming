/**
 * palindrome - checks if a string is a palindrome recursively
 * @s: the string to check
 * @n: the starting index of the substring to check
 * @i: the ending index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int palindrome(char *s, int n, int i)
{
	if (n >= i)
		return (1);
	if (s[n] != s[i])
		return (0);
	return (palindrome(s, n + 1, i - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int m = 0;

	while (s[m])
		m++;
	return (_is_palindrome(s, 0, m - 1));
}
