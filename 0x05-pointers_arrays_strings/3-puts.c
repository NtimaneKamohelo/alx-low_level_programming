#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	if (*str == '\0')
	{
		return;
		_putchar(*str);
		_putchar(++*str);
	}
	_putchar('\n');
}
