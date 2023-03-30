#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, sum, carry = 0;

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	k = 0;
	l = 0;

	while (i >= 0 || j >= 0)
	{
		m = (i >= 0) ? n1[i] - '0' : 0;
		n = (j >= 0) ? n2[j] - '0' : 0;
		sum = carry + m + n;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
		if (k >= size_r)
			return (0);
	}
	if (carry > 0)
	{
		if (k >= size_r)
			return (0);
		r[k++] = carry + '0';
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char c = r[i];

		r[i] = r[j];
		r[j] = c;
	}
	return (r);
}
