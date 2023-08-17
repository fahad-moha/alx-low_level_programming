#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * @...: Variable arguments (strings)
 *
 * Description: This function prints a variable number of strings, separated
 * by the given separator string. It prints a new line at the end.
 * If the separator is NULL, it is not printed.
 * If a string is NULL, it is printed as (nil).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
