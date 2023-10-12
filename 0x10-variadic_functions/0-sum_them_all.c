#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all
 * @n: input parameter
 * Return: sum
 * owned by: SmoxHakim
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
