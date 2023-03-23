#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a variable number of strings, separated by a given
 *                 separator string
 *
 * @separator: the string to print between each of the strings (or NULL)
 * @n:         the number of strings to print
 *             (must be >= 0, but can be 0 if no strings are provided)
 * @...:       the strings to print (as variadic arguments)
 *             (must be of type `const char *`)
 *
 * Return:     void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++) 
	{
		str = va_arg(args, const char *);
		printf("%s", str ? str : "(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
