#include "main.h"

/**
 * print_times_table - Prints the n times table starting with 0
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int a, b, x;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				x = a * b;

				if (x <= 99)
					_putchar(' ');
				if (x <= 9)
					_putchar(' ');

				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10)) % 10 + '0');
				}
				else if (x <= 99 && x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
