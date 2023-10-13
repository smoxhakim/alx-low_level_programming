#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: string of char
 * owned by: SmoxHakim
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				separator = va_arg(args, char *) ? "" : "(nil)";
				printf("%s%s", separator, va_arg(args, char *));
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
