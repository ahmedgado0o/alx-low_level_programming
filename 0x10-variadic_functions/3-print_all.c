#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all input
 * @format:  is a list of types of arguments passed to the function
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	char *s;
	int first;

	va_start(args, format);
	first = 1;
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", first ? "" : ", ", c);
			first = 0;
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", first ? "" : ", ", va_arg(args, int));
			first = 0;
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", first ? "" : ", ", (float)va_arg(args, double));
			first = 0;
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				s = "(nil)";
				printf("%s%s", first ? "" : ", ", s);
				first = 0;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
