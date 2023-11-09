#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: numbers of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char * x = va_arg(args, char *);

		if (x != NULL)
			printf("%s", x);
		else
			printf("nil");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
