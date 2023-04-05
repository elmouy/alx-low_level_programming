#include "main.h"

/**
 * square - recursively find the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (square(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (square(n, 0));
}
