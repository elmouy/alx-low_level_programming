#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f, s, i;

	s = sizeof(*n);
	f = s * 8;
	if (index > (f - 1))
		return (-1);
	i = 1 << index;
	*n = *n & ~i;
	return (1);
}
