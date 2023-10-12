#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *str;
	char *separator = "";
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

