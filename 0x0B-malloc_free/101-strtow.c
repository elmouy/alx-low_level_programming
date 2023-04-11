#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **p, *t;
	int i, k = 0, j = 0, w, d = 0, m, f;

	while (*(str + j))
		j++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				f = i;
				t = (char *) malloc(sizeof(char) * (d + 1));
				if (t == NULL)
					return (NULL);
				while (m < f)
					*t++ = str[m++];
				*t = '\0';
				p[k] = t - d;
				k++;
				d = 0;
			}
		}
		else if (d++ == 0)
			m = i;
	}

	p[k] = NULL;

	return (p);
}
