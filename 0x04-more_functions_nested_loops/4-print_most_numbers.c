#include "main.h"

/**
 * print_most_numbers - Prints most numbers from 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		_putchar (x);
	}
	_putchar ('\n');
}
