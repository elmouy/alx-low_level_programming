#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters.
 * @...: A variables.
 *
 * Return:0 if n=0.
 *         Otherwise - the sum of all.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		s += va_arg(args, int);

	va_end(args);

	return (0);
}

