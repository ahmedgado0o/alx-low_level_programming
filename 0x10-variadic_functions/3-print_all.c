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
	float f;
	int num;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
