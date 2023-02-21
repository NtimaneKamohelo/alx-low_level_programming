include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, x, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			p = i * x;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
