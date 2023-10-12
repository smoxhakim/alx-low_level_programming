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

	char *str, *separator = "";
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
		{
			separator = ", ";
		}

		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, (float)va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
		}
		i++;
		}

	va_end(args);
	printf("\n");
}
