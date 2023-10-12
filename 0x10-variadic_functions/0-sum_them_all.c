#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all
 * @n: input parameter
 * Return: sum
 * owned by: SmoxHakim
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		
	sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
