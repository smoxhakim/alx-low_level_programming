#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print str
 * @separator: the str
 * @n: input numbre
 * owned by: SmoxHakim
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
