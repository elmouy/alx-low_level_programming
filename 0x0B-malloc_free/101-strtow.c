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
	int i, j, k;

	i = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}

	return (k);
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
	char **p, *r;
	int i, j = 0, m = 0, w, n = 0, s, e;

	while (*(str + m))
		m++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= m; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (n)
			{
				e = i;
				r = (char *) malloc(sizeof(char) * (e + 1));
				if (r == NULL)
					return (NULL);
				while (s < e)
					*r++ = str[s++];
				*r = '\0';
				p[j] = r - n;
				j++;
				n = 0;
			}
		}
		else if (n++ == 0)
			s = i;
	}

	p[j] = NULL;

	return (p);
}
