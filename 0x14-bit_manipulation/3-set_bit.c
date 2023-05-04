#include "main.h"

#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
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
