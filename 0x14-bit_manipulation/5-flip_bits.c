#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip to get from one number to another
 * @n: number-1
 * @m: number-2
 * Return: number-2
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j;

	i = n ^ m;
	j = 0;

	while (i)
	{
		j++;
		i &= (i - 1);
	}

	return (j);
}
