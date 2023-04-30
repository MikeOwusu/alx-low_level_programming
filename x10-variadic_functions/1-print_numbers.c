#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - to print numbers in the string
 * @separator: the string to seaparate numbers
 * @n: the number integers paseed to the function
 * Return: returns 0 if success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
