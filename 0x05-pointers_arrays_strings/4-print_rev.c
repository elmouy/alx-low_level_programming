#include "main.h"
/**
 * print_rev, prints a string, in reverse, followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;
	int n = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (j = n; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
