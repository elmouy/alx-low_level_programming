#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, ls1 = 0, ls2 = 0;

	if (s1 != '\0' && s1[ls1])
	{
		ls1++;
	}
	if (s2 != '\0' && s2[ls21])
	{
		ls2++;
	}
	if (n < ls2)
	{
		p = malloc(sizeof(char) * (ls1 + n + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (ls1 + ls2 + 1));
	}
	if (!p)
	{
		return (NULL);
	}

	while (i < ls1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < ls2 && i < (ls1 + n))
	{
		p[i++] = s2[j++];
	}
	while (n >= ls2 && i < (ls1 + ls2))
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';

	return (s);
}
