#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints a formatted list of arguments.
 * @format: A string composed of characters representing the types of
 * arguments 'c' for char, 'i' for int, 'f' for float, 's' for string.
 *          Any other character is ignored.
 *          The function prints the corresponding arguments separated by comma.
 *          If a string argument is NULL, "(nil)" is printed instead.
 *          If format is NULL, the function does nothing.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *separator;
	va_list list;

	i = 0;
	separator = "";
	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

