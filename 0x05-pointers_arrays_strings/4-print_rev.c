#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
int len, i;
len = strlen(s);
for (i = len; i >= 0; i--)
_putchar(*(s + i));
_putchar("\n");
}
