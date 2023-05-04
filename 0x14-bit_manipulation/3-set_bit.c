#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 or -1 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (index > 64)
		return (-1);

	for (c = 1; index > 0; index--, c *= 2)
		;
	*n += c;

	return (1);
}
